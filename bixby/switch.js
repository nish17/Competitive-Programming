/* let operand1 = 10, operand2=20;
let ans=0;
let operator = 'plus';
switch(operator){
    case '+' || 'plus':
    ans = operand1+operand2;
    break;
    case '-' || 'minus':
    ans = operand1-operand2;
    break;
    case  '*' || 'multiply':
    ans = operand1*operand2;
    break;
    case '/' || 'divide':
    ans = operand1/operand2;
    break;
    default: ans=operand1+operand2;
}

console.log(ans);
 */

 const {data} = require('./dataStructure');
 const dsName = "Linked list"
//  console.log(data);

/*  for (let ds in data){
    console.log(ds);
    break; 
    if(ds.name == dataStructure) console.log(JSON.stringify(ds));

 } */

//  data.forEach(ds => {
//     //  console.log(ds);
//      if(ds.name == dataStructure) console.log(JSON.stringify(ds));
//  });

// var data = require('./utils/dataStructure.js');
// var console = require('console');
// module.exports.function = function getDataStructureAction(dsName, type) {
  // var ds = null;
  let type = "Linear Data structure"
  function getDataStructureAction(dsName, type){
  var dsArray = [];
  let info = "";

  if (dsName) {

    data.forEach(ds => {
      if (ds.name.toLowerCase() == dsName.toLowerCase()) dsArray.push(ds)
    });

    if (dsArray.length > 0) {
      return dsArray;
    }
  }

  if (type) {
    data.forEach(ds => {
      if (ds.type.toLowerCase() == type.toLowerCase()) dsArray.push(ds)
    });

    if (dsArray.length > 0) {
      return dsArray;
    }
  }
  return data;
}

let ans123 = getDataStructureAction(undefined, type);

console.log(typeof ans123);
console.log(ans123);
