function changeStyle(){
    var paragraph = document.getElementsByTagName("p");

    var changeParaText = paragraph[1].style.fontStyle = "italic";
    var changeParaText = paragraph[1].style.color = "red";

    var parent = document.getElementById("text");
    var child = document.getElementById("p1");
    parent.removeChild(child);
}