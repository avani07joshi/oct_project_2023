const colors = ["Red", "Green", "Blue", "Yellow", "Purple", "Orange", "Pink"];
const decentColors = [
  "#3498db", // Blue
  "#2ecc71", // Green
  "#e74c3c", // Red
  "#f39c12", // Orange
  "#9b59b6", // Purple
  "#27ae60", // Emerald
  "#e67e22", // Carrot
  "#1abc9c", // Turquoise
  "#d35400", // Pumpkin
  "#8e44ad", // Wisteria
  "#16a085", // Green Sea
  "#c0392b", // Fire Brick
  "#f1c40f", // Yellow
  "#2980b9", // Belizian Blue
  "#d35400", // Pumpkin
];
const headings = document.querySelectorAll(".heading"); // Use querySelectorAll to select all elements with the class "heading"
const colorButton = document.getElementById("colorChangeButtonHead");
const backColorBtn = document.getElementById("colorChangeButtonBackground");
const body = document.getElementById("body");
function changeColors() {
  headings.forEach((heading) => {
    const randomIndex = Math.floor(Math.random() * colors.length);
    heading.style.color = colors[randomIndex];
  });
}
function changeColorBackground() {
  const randomColor = Math.floor(Math.random() * decentColors.length);
  body.style.backgroundColor = decentColors[randomColor];
}

colorButton.addEventListener("click", changeColors);
backColorBtn.addEventListener("click", changeColorBackground);
