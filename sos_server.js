var net = require('net');

var port = (4 * 10000) + (1 * 100) + 13;

net.Server(function(conn) {
  console.log('<<sos>>');
  conn.on('data', function(data) {
    console.log(data.toString());
  });
  conn.on('end', function() {
    console.log('<<end>>');
  });
}).listen(port);

