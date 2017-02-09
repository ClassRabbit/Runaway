var express = require('express');
var Score = require('../models/Score');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  Score.find({}, null, {sort: {score: -1}, limit: 10}, function(err, scores){
    if(err){
      console.log('find err');
      return;
    }
    console.log('find success');
    return res.json(scores);
  });
});

router.post('/', function(req, res, next) {
  console.log(req.body);

  var newScore = new Score({
    name : req.body.name,
    score : parseInt(req.body.score)
  });

  newScore.save(function(err, score){
    if(err){
      console.log("save err");
      return;
    }
    console.log("save success");
    return res.json();
  });
});

module.exports = router;
