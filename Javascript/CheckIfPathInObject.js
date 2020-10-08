//Function to check if given path exists in an object (if it does, it returns that value)

//eg o={k1 : { k2 : 'val' } } , path = 'k1.k2'
//returns 'val'

function at(o, path, def) {
  var pointer = o,
      failed = false;

  if (!o || !path) {
      return o;
  }
  _.each(path.split('.'), function(p) {
      if (pointer[p] !== null && pointer[p] !== undefined && !failed) {
          pointer = pointer[p];
      } else {
          failed = true;
      }
  });
  return failed ? (o[path] || def) : pointer;
}

