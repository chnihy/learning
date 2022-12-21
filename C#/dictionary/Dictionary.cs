using System;
using System.Collections.Generic;

// Declare a new Dictionary from System.Collections.Generic
Dictionary<string, string> d = new Dictionary<string, string>();

// Add kv pairs using the .Add() method
d.Add("A", "0");
Console.WriteLine(d["A"]);

// Using a forloop and string indexes to generate kv pairs
String myString = "BCDEFGHIJK";
for(int x = 1; x < myString.Length + 1; x++){
	string k = myString[x].ToString();
	d.Add(k, x.ToString());
}

// printing kv pairs with a foreach loop
foreach(KeyValuePair<string, string> kvp in d){
	Console.WriteLine("Key: {0}, Value: {1}", kvp.Key, kvp.Value);
}
