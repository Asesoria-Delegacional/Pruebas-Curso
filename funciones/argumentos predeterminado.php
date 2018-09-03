

<?php

define('FRUTAS', ["hola", "perro"]);

function pastel($sabor = "limon"){
  echo "<p>Pastel sabor a ".$sabor."</p>";
}

pastel(); // sin argumentos, usando parametros predeterminados
pastel("Chocolate"); // Pasando valores
pastel(); // sin argumentos, usando parametros predeterminados

?>
