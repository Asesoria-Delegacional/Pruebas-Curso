

<?php

$variable = 5;

function incremento(){
  global $variable;
  return ++$variable;
}


echo "<br />".incremento();

 ?>
