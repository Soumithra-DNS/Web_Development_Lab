// Selecting the element with id 'highlight'
let element = document.getElementById("highlight");

// Changing the background color of the selected element
element.style.background = "yellow";

// Selecting all elements with class 'note'
let elements = document.getElementsByClassName("note");

// Looping through the selected elements
for (let i = 0; i < elements.length; i++) {
  // Changing the background color of each element
  elements[i].style.background = "lightblue";
}

// Selecting all paragraph elements
let paragraphs = document.getElementsByTagName("p");

// Looping through the selected elements
for (let i = 0; i < paragraphs.length; i++) {
  // Changing the text color of each paragraph
  paragraphs[i].style.color = "green";
}

// Selecting the first element with class 'highlight'
let firstHighlight = document.querySelector(".highlight");
firstHighlight.style.fontWeight = "bold";

// Selecting all elements with class 'highlight'
let allHighlights = document.querySelectorAll(".highlight");

// Looping through the selected elements
allHighlights.forEach(function (element) {
  // Changing the text color of each element
  element.style.color = "red";
  element.style.fontSize = "18px"; // Sets font size to 18 pixels
  element.style.fontWeight = "bold"; // Makes the text bold
});

// // Selecting all elements with class 'highlight'
// let allHighlights = document.querySelectorAll(".highlight");

// // Looping through the selected elements using a for loop
// for (let i = 0; i < allHighlights.length; i++) {
//     // Changing the text color of each element
//     allHighlights[i].style.color = "red";
// }

// // Selecting all elements with class 'highlight'
// let allHighlights = document.querySelectorAll(".highlight");

// Looping through the selected elements using a for...of loop
// for (let element of allHighlights) {
//     // Changing the text color of each element
//     element.style.color = "red";
// }

// Selecting the element by its ID
let button = document.getElementById("myBtn");

// Setting new attributes
button.setAttribute("class", "click-btn");
button.setAttribute("disabled", "");

// Selecting the element by its ID
let link = document.getElementById("myLink");

// Removing the href attribute
link.removeAttribute("href");

// Create a new div element
let newDiv = document.createElement("div");

// Create a text node
let newContent = document.createTextNode("Hi, how are you doing?");

// Append the text node to the new div
newDiv.appendChild(newContent);

// Insert the new div into the DOM
let currentDiv = document.getElementById("main");
document.body.insertBefore(newDiv, currentDiv);
