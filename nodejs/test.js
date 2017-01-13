
function add() {
  
  a = parseInt( process.argv[2], 10 )
  b = parseInt( process.argv[3], 10 )
  c = a + b
  console.log("Total : " + c)
  
}

add()
