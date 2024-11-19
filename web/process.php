<?php
// Get the form data
$name = $_POST['name'];
$roll = $_POST['roll'];
$stream = $_POST['stream'];
$marks = [
    $_POST['subject1'],
    $_POST['subject2'],
    $_POST['subject3'],
    $_POST['subject4'],
    $_POST['additional']
];

// Write the input data to a temporary file
$inputFile = "input.txt";
file_put_contents($inputFile, "$name\n$roll\n$stream\n" . implode("\n", $marks));

// Execute the C program
exec("gcc marksheet.c -o marksheet && ./marksheet < $inputFile", $output);

// Display the result
echo "<h1>Marksheet Output</h1>";
echo "<pre>" . implode("\n", $output) . "</pre>";

// Cleanup
unlink($inputFile);
?>
