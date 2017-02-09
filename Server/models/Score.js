var mongoose = require('mongoose'),
    Schema = mongoose.Schema;

var schema = new Schema({
  name: {type: String, required: true},
  score: {type: Number, required: true}
}, {
  toJSON: {virtuals: true},
  toObject: {virtuals: true}
});

var Score = mongoose.model('Score', schema);

module.exports = Score;
