// Show an alert when the page loads
window.onload = () => {
    alert("Page is loaded successfully!");
};

// Handle button interactions
document.getElementById("btnClick").onclick = () => {
    // Alert when the button with ID 'btnClick' is clicked
    alert("You have clicked the button!");
};

document.getElementById("btnRightClick").oncontextmenu = (e) => {
    e.preventDefault(); // Prevent the default context menu (right-click menu)
    alert("You have right-clicked the button!");
};

document.getElementById("btnMouseOver").onmouseover = () => {
    // Alert when the mouse hovers over the button
    alert("You have placed the mouse pointer over the button!");
};

document.getElementById("btnMouseOut").onmouseout = () => {
    // Alert when the mouse moves out of the button
    alert("You have moved the mouse out of the button!");
};

// Handle link interactions
document.getElementById("linkClick").onclick = (e) => {
    e.preventDefault(); // Prevent the link from navigating to another page
    alert("You have clicked the link!");
};

document.getElementById("linkRightClick").oncontextmenu = (e) => {
    e.preventDefault(); // Prevent the default context menu for the link
    alert("You have right-clicked the link!");
};

document.getElementById("linkMouseOver").onmouseover = () => {
    // Alert when the mouse hovers over the link
    alert("You have placed the mouse pointer over the link!");
};

document.getElementById("linkMouseOut").onmouseout = () => {
    // Alert when the mouse moves out of the link
    alert("You have moved the mouse out of the link!");
};

// Handle key events for text inputs
document.getElementById("textKeydown").onkeydown = () => {
    // Alert when a key is pressed inside the text input
    alert("You have pressed a key inside the text input!");
};

document.getElementById("textareaKeydown").onkeydown = () => {
    // Alert when a key is pressed inside the textarea
    alert("You have pressed a key inside the textarea!");
};

document.getElementById("textKeyup").onkeyup = () => {
    // Alert when a key is released inside the text input
    alert("You have released a key inside the text input!");
};

document.getElementById("textareaKeyup").onkeyup = () => {
    // Alert when a key is released inside the textarea
    alert("You have released a key inside the textarea!");
};

// Highlight input field when focused
document.getElementById("textFocus").onfocus = (e) => {
    // Change the background color of the input to yellow when focused
    e.target.style.background = "yellow";
};

// Alert when input loses focus
document.getElementById("textBlur").onblur = () => {
    // Alert when the text input loses focus
    alert("Text input loses focus!");
};
document.getElementById("textBlur").onfocus = (e) => {
    // Change the background color of the input to yellow when focused
    e.target.style.background = "yellow";
};

// Alert when dropdown value changes
document.getElementById("dropdownChange").onchange = () => {
    // Alert when the user changes the selection in the dropdown
    alert("You have changed the selection!");
};

// Handle form submission
document.getElementById("formSubmit").onsubmit = (e) => {
    e.preventDefault(); // Prevent the form from submitting to the server for demo purposes
    alert("Form data will be submitted to the server!");
};

// Display the window size when resized
const displayWindowSize = () => {
    // Get the outer width and height of the window
    const width = window.outerWidth;
    const height = window.outerHeight;

    // Create a text string displaying the dimensions
    const sizeText = `Window size: width=${width}, height=${height}`;

    // Update the paragraph with the ID 'windowSize' to display the dimensions
    document.getElementById("windowSize").textContent = sizeText;
};

// Attach the resize event listener to the window
window.onresize = displayWindowSize;

// Display the initial window size when the page loads
displayWindowSize();
