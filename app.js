var request = require("request");

let myParticleId = "f1234f1234"     // you gotta enter this
let myParticleFunction = "doAll"

var options = {
    url: "https://api.particle.io/v1/devices/"+myParticleId+"/"+ myParticleFunction,
    method: "POST",
    form: {
        access_token:"c43212c4321c4321",    // you gotta enter this
        arg:"toggleLED"
    }
};

function callback(error, response, body) {
    if (!error && response.statusCode == 200) {
        console.log(body);
    }
}

request(options, callback);
