// console.log("Hello World");

// function name(parameter1, parameter2, parameter3) {
// code to be executed
// }

//blablabla.onclick = function()

/* Writing into an HTML element, using innerHTML.
Writing into the HTML output using document.write().
Writing into an alert box, using window.alert().
Writing into the browser console, using console.log(). */

let outputScreen = document.getElementById("output-screen");

function display(num) {
  outputScreen.value = outputScreen.value + num;
}

function calculate() {
  try {
    outputScreen.value = eval(outputScreen.value);
  } catch (err) {
    alert("Invalid!");
  }
}

function Clear() {
  outputScreen.value = "";
}

function del() {
  outputScreen.value = outputScreen.value.slice(0, -1);
}
