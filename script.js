const colors = ["Red", "Green", "Blue", "Yellow", "Purple", "Orange", "Pink"];
const headings = document.querySelectorAll(".heading"); // Use querySelectorAll to select all elements with the class "heading"
const colorButton = document.getElementById("colorChangeButton");

function changeColors() {
  headings.forEach((heading) => {
    const randomIndex = Math.floor(Math.random() * colors.length);
    heading.style.color = colors[randomIndex];
  });
}

colorButton.addEventListener("click", changeColors);
