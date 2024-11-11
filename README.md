C++ is a language that supports objects in the form of classes. In classes, you should be naming them nouns and, if there are more than one words in it, each word should be capitalized. In my example, they are both one word, Person and Student, but, for example, you could also do something like PersonData or StudentData.
In these classes, you can use toString() as a method to get your string printed, however, there are other ways to do it, like the ones I used here, getPerson() and getStudent(). 
It is possible to inherit more than one class into a new class. If Student inherited from Person as well as another class called University, it would be similarly structured in the class line as 
  class Student: public Person, public University{};. 
In order to properly call your methods, you need to make sure they are distinct from each other. If both the Parent and Student class have a toSting(), the compiler might not use the one that you are trying to use. This is why you use different names for similar methods like getParent() and getStudent(). 

If you are interested in doing some more reading, I suggest geeksforgeeks.org, w3schools.com, and cppreference.com. 
