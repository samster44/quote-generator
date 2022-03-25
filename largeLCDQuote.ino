// Samson Poole


// include the library code:
#include <LiquidCrystal_I2C.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x27, 20, 4); // Set the LCD I2C address 

// author store
const char Einstein_author[] PROGMEM = "Einstein"; 
const char General_author[] PROGMEM = "";
const char Thoreau_author[] PROGMEM = "Thoreau";
const char Aurelius_author[] PROGMEM = "Aurelius";
const char Disney_author[] PROGMEM = "W.Disney";
const char Shakespeare_author[] PROGMEM = "Shakespeare";
const char Edison_author[] PROGMEM = "Edison";
const char Yoda_author[] PROGMEM = "Yoda";
const char Milne_author[] PROGMEM = "A.A.Milne";
const char Muste_author[] PROGMEM = "A.J.Muste";
const char Agatha_author[] PROGMEM = "Agatha Christie";
const char Botton_author[] PROGMEM = "Alain de Botton";
const char Kronrod_author[] PROGMEM = "Alexander Kronrod";
const char Chaplin_author[] PROGMEM = "Chaplin";
const char Newton_author[] PROGMEM = "Newton";
const char Nietzshe_author[] PROGMEM = "Nietzshe";
const char Blake_author[] PROGMEM = "Blake";
const char Socrates_author[] PROGMEM = "Socrates";
const char Beethoven_author[] PROGMEM = "Beethoven";
const char Wilde_author[] PROGMEM = "Wilde";
const char Twain_author[] PROGMEM = "Twain";
const char Picasso_author[] PROGMEM = "Picasso";
const char Joker_author[] PROGMEM = "Joker";
const char Gump_author[] PROGMEM = "Forrest Gump";
const char Lebowski_author[] PROGMEM = "The Big Lebowski";
const char Greedo_author[] PROGMEM = "Greedo";
const char Leonidas_author[] PROGMEM = "King Leonidas";
const char Bonanno_author[] PROGMEM = "Alfredo M. Bonanno";
const char Ali_author[] PROGMEM = "Muhammed Ali";
const char Murphy_author[] PROGMEM = "Murphy's Law";
const char Occam_author[] PROGMEM = "Occam's razor";
const char Dirac_author[] PROGMEM = "Dirac";
const char Bin_Laden_author[] PROGMEM = "Osama bin Laden";
const char Trump_author[] PROGMEM = "Donald Trump";
const char Hendrix_author[] PROGMEM = "Hendrix";
const char Kanye_author[] PROGMEM = "Kanye West";
const char Hicks_author[] PROGMEM = "Bill Hicks";
const char Attenborough_author[] PROGMEM = "Attenborough";
const char R_Williams_author[] PROGMEM = "R.Williams";
const char Clarke_author[] PROGMEM = "Emilia Clarke";
const char Buffett_author[] PROGMEM = "Buffett";
const char Obama_author[] PROGMEM = "Obama";
const char M_L_King_author[] PROGMEM = "M.L.King,Jr";
const char Ferdinand_author[] PROGMEM = "Ferdinand";
const char Rennie_author[] PROGMEM = "Rennie";
const char KKPoole_author[] PROGMEM = "K.K.Poole";
const char Tom_Cruise_Author[] PROGMEM = "Tom Cruise";
const char Charles_Dickens_Author[] PROGMEM = "Charles Dickens";
const char Viktor_Frankl_Author[] PROGMEM = "V.Frankl";
const char John_Clare_author[] PROGMEM = "John Clare";
const char AR_Poole_author[] PROGMEM = "A R Poole";


// quote store
const char einstein_quote_1[] PROGMEM = "I never think of the future. It comes soon enough";
const char einstein_quote_2[] PROGMEM ="Only a life lived for others is a life worthwhile";
const char einstein_quote_3[] PROGMEM = "Force always attracts men of low morality";
const char einstein_quote_4[] PROGMEM ="Bureaucracy is the death of all sound work";
const char einstein_quote_5[] PROGMEM = "If I can't picture it, I can't understand it";
const char einstein_quote_6[] PROGMEM ="Anonymity is no excuse for stupidity";
const char einstein_quote_7[] PROGMEM = "I never think of the future. It comes soon enough";
const char einstein_quote_8[] PROGMEM = "Reality is merely an illusion, albeit a very persistent one";
const char einstein_quote_9[] PROGMEM = "Everything must be made as simple as possible. But not simpler";
const char General_quote_1[] PROGMEM = "God watches and kills us when we get boring. We must never be boring";
const char General_quote_2[] PROGMEM = "It's foolish to run the risk of going mad for vanity's sake";
const char General_quote_3[] PROGMEM = "'Twelve dead?' I said. 'Jesus.'";
const char General_quote_4[] PROGMEM = "If you don't know where you're going, any road'll take you there";
const char General_quote_5[] PROGMEM = "Carpe Diem. Seize the day, boys";
const char Thoreau_quote[] PROGMEM = "Heaven is under our feet as well as over our heads";
const char Aurelius_quote[] PROGMEM = "Reject your sense of injury and the injury itself disappears";
const char Disney_quote[] PROGMEM = "When you're curious, you find lots of interesting things to do";
const char Edison_quote[] PROGMEM = "I have not failed. I've just found 10,000 ways that won't work";
const char Yoda_quote_1[] PROGMEM = "Do or do not, there is no try";
const char Yoda_quote_2[] PROGMEM = "Truly wonderful, the mind of a child is";
const char Yoda_quote_3[] PROGMEM = "Always two there are, no more, no less. A master and an apprentice";
const char Milne_quote[] PROGMEM = "How sweet to be a cloud floating in the blue.";
const char Muste_quote[] PROGMEM = "There is no way to peace; peace is the way.";
const char A_Christie_quote[] PROGMEM = "Courage is the resolution to face the unforeseen.";
const char Botton_quote[] PROGMEM = "Life is near-death experience";
const char Kronrod_quote[] PROGMEM = "An idea is nothing, its implementation everything.";
const char Chaplin_quote[] PROGMEM = "Nothing is permanent in this wicked world - not even our troubles";
const char Newton_quote[] PROGMEM = "If I have seen further it is by standing on the shoulders of Giants";
const char Nietzshe_quote[] PROGMEM = "When we are tired, we are attacked by ideas we conquered long ago";
const char Blake_quote[] PROGMEM = "A truth that's told with bad intent, beats all the lies you can invent";
const char Socrates_quote_1[] PROGMEM = "I cannot teach anybody anything. I can only make them think";
const char Socrates_quote_2[] PROGMEM = "The only true wisdom is in knowing you know nothing";
const char Beethoven_quote[] PROGMEM = "Music is... A higher revelation than all Wisdom & Philosophy";
const char Shakespeare_quote_1[] PROGMEM = "Hell is empty and all the devils are here";
const char Wilde_quote[] PROGMEM = "To live is the rarest thing in the world. Most people exist, that is all";
const char Twain_quote[] PROGMEM = "Good friends, good books, and a sleepy conscience: this is the ideal life";
const char Picasso_quote[] PROGMEM = "Everything you can imagine is real";
const char Joker_quote[] PROGMEM = "Why so serious?";
const char Gump_quote[] PROGMEM = "Mama says, 'Stupid is as stupid does.'";
const char Lebowski_quote[] PROGMEM = "The Dude abides";
const char Greedo_quote[] PROGMEM ="Koona t'chuta Solo?";
const char Leonidas_quote[] PROGMEM = "THIS. IS. SPARTA!!!";
const char Bonanno_quote[] PROGMEM = "The rebellion of the exploited is never terrorism";
const char Ali_quote[] PROGMEM = "Float like a butterfly, sting like a bee";
const char Murphy_quote[] PROGMEM = "Anything That Can Possibly Go Wrong, Does";
const char Occam_quote[] PROGMEM = "Entities should not be multiplied without necessity";
const char Dirac_quote[] PROGMEM = "Pick a flower on Earth and you move the farthest star";     
const char Bin_Laden_quote[] PROGMEM = "There is no dialogue except with weapons";
const char Trump_quote[] PROGMEM = "You know, I'm, like, a smart person";
const char Shakespeare_quote_2[] PROGMEM = "There is nothing either good or bad but thinking makes it so";
const char Kanye_quote[] PROGMEM = "Believe in your flyness...conquer your shyness";
const char Hicks_quote_1[] PROGMEM = "Don't worry; don't be afraid, ever, because this is just a ride";    
const char Hicks_quote_2[] PROGMEM = "All governments are lying cocksuckers";
const char Attenborough_quote[] PROGMEM = "I wish the world was twice as big and still half unexplored";
const char R_Williams_quote[] PROGMEM = "You're only given a little spark of madness. You mustn't lose it";
const char Clarke_quote[] PROGMEM = "Never trust anyone whose TV is bigger than their book shelf";
const char Buffett_quote[] PROGMEM = "The Noah rule: Predicting rain doesn't count; building arks does";
const char Obama_quote[] PROGMEM = "The best way to not feel hopeless is to get up and do something.";
const char M_L_King_quote[] PROGMEM = "You don't have to see the whole staircase, just take the first step";
const char Ferdinand_quote[] PROGMEM = "Get Gold, humanely if you can, but at all hazards, get gold";
const char Rennie_quote_1[] PROGMEM = "What a blessing!";
const char Rennie_quote_2[] PROGMEM = "Oh confound it";
const char KKPoole_quote_1[] PROGMEM = "Somewhere along the way, I realised I was smiling";
const char Tom_Cruise_quote[] PROGMEM = "Colonal Jessep! Did you order the code red!";
const char KKPoole_quote_2[] PROGMEM = "Ah Jesus!";
const char Charles_Dickens_quote[] PROGMEM = "It was the best of times, it was the worst of times";
const char Viktor_Frankl_quote[] PROGMEM = "Those who have a'why'to live, can bare with almost any 'how'.";
const char John_Clare_quote[] PROGMEM = "Darkness like midnight from the sobbing woods.";
const char AR_Poole_quote[] PROGMEM = "On the far side a forest of black yews crouched and drew.";

 
// quotes and authors combined
const char *const quotes[][2] PROGMEM = {
  {Einstein_author, einstein_quote_1},
  {Einstein_author, einstein_quote_2},
  {Einstein_author, einstein_quote_3},
  {Einstein_author, einstein_quote_4},
  {Einstein_author, einstein_quote_5},
  {Einstein_author, einstein_quote_6},
  {Einstein_author, einstein_quote_7},
  {Einstein_author, einstein_quote_8},
  {Einstein_author, einstein_quote_9},
  {General_author, General_quote_1},
  {General_author, General_quote_2},
  {General_author, General_quote_3},
  {General_author, General_quote_4},
  {General_author, General_quote_5},
  {Thoreau_author, Thoreau_quote},
  {Aurelius_author, Aurelius_quote},
  {Disney_author, Disney_quote},
  {Edison_author, Edison_quote},
  {Yoda_author, Yoda_quote_1},
  {Yoda_author, Yoda_quote_2},
  {Yoda_author, Yoda_quote_3},
  {Milne_author, Milne_quote},
  {Muste_author, Muste_quote},
  {Agatha_author, A_Christie_quote},
  {Botton_author, Botton_quote},
  {Kronrod_author, Kronrod_quote},
  {Chaplin_author, Chaplin_quote},
  {Newton_author, Newton_quote},
  {Nietzshe_author, Nietzshe_quote},
  {Blake_author, Blake_quote},
  {Socrates_author, Socrates_quote_2},
  {Socrates_author, Socrates_quote_2},
  {Beethoven_author, Beethoven_quote},
  {Shakespeare_author, Shakespeare_quote_1},
  {Wilde_author, Wilde_quote},
  {Twain_author, Twain_quote},
  {Picasso_author, Picasso_quote},
  {Joker_author, Joker_quote},
  {Gump_author, Gump_quote},
  {Lebowski_author, Lebowski_quote},
  {Greedo_author, Greedo_quote},
  {Leonidas_author, Leonidas_quote},
  {Bonanno_author, Bonanno_quote},
  {Ali_author, Ali_quote},
  {Murphy_author, Murphy_quote},
  {Occam_author, Occam_quote},
  {Dirac_author, Dirac_quote},
  {Bin_Laden_author, Bin_Laden_quote},
  {Trump_author, Trump_quote},
  {Shakespeare_author, Shakespeare_quote_2},
  {Kanye_author, Kanye_quote},
  {Hicks_author, Hicks_quote_1},
  {Hicks_author, Hicks_quote_2},
  {Attenborough_author, Attenborough_quote},
  { R_Williams_author,  R_Williams_quote},
  {Clarke_author, Clarke_quote},
  {Buffett_author, Buffett_quote},
  {Obama_author, Obama_quote},
  {M_L_King_author, M_L_King_quote},
  {Ferdinand_author, Ferdinand_quote},
  {Rennie_author, Rennie_quote_1},
  {Rennie_author, Rennie_quote_2},
  {KKPoole_author, KKPoole_quote_1},
  {Tom_Cruise_Author, Tom_Cruise_quote},
  {KKPoole_author, KKPoole_quote_2},
  {Charles_Dickens_Author, Charles_Dickens_quote},
  {Viktor_Frankl_Author, Viktor_Frankl_quote},
  {John_Clare_author, John_Clare_quote},
  {AR_Poole_author, AR_Poole_quote}
};

// holds quote, quote marks and author
char buffer[85]; // make sure this is large enough for the largest string it must hold
// holds author
char author[20];
// holds quote
char wholeLine [80];

//number of iterations after quote duration has changed
int increment = 0;

// match the number of quotes to this integer to generate random number
int rando = 69;


// setup rotary encoder pins
#define encoder0PinA 2
#define encoder0PinB 3
// count for rotary encoder position
int encoder0Pos = 0;
//initial quote duration length (seconds)
int count = 5;
// hold current time and previous time of last quote change
unsigned long previousMillis = 0;
unsigned long currentMillis = 0;

void setup() {

  lcd.init(); //initialize the lcd
  lcd.backlight(); //open the backlight 
  Serial.begin(9600); // for outputting to serial monitor
  randomSeed(analogRead(0)); // generate random seed from analogue pin

  //set up rotary encoder pin reading
  pinMode(encoder0PinA, INPUT_PULLUP);
  pinMode(encoder0PinB, INPUT_PULLUP);
  // set up interrupt function on interrupt pin (2?)
  attachInterrupt(0, doEncoder, CHANGE);
  
}

// count for quote time change
int valRotary,lastValRotary;


void loop() {

  // reset increment for quote time change
  if(valRotary != lastValRotary)
  {
    increment = 0;
  }
  
  if(increment == 0)  {
    delay(2000);
    count = count + valRotary - lastValRotary;

    // limit quote duration to 5 seconds
    lastValRotary = valRotary;
    if (count < 5) {
      count = 5;
    }

    //print quote duration
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("quote duration: ");
    lcd.setCursor(0, 1);
    lcd.print(count);
    lcd.print(" seconds");
    delay(2000);

    // set current milliseconds
    currentMillis = millis();
    // save the last time the quote changed
    previousMillis = currentMillis;

    //generate random integer between 0 and quote num
    int randomNum = rando - 1;  //round(random(rando));
    //Serial.println(randomNum);

    lcd.clear();

    // read quote and author from progmem
    strcpy_P(wholeLine, (char *)pgm_read_word(&(quotes[randomNum][1])));
    strcpy_P(author, (char *)pgm_read_word(&(quotes[randomNum][0])));
    
    strcpy(buffer, "\"");
    strcat(buffer, wholeLine);
    strcat(buffer, "\"");

    // check if there is an author for the quote
    if (strlen(author) != 0) {
      strcat(buffer, " - ");
      strcat(buffer, author);
    }
    
    int lineEnd;
    int currentLineEnd;
    for (int j = 0; j < 21; j += 1) {
      if (String(buffer[j]) == " ") {
        lineEnd = j;
      }
    }
    String firstLn = (String(buffer)).substring(0,lineEnd);
    
    for (int j = 1; j < 22; j += 1) {
      if (String(buffer[j+lineEnd]) == " ") {
        currentLineEnd = lineEnd + j;
      }
    }
    String secondLn = (String(buffer)).substring((lineEnd + 1),currentLineEnd);
    
    lineEnd = currentLineEnd;
    for (int j = 1; j < 22; j += 1) {
      if (String(buffer[j+lineEnd]) == " ") {
        currentLineEnd = lineEnd + j;
      }
    }
    String thirdLn = (String(buffer)).substring((lineEnd + 1),currentLineEnd);
    
    lineEnd = currentLineEnd;

    // check that quote and author can fit on screen, and if not then only use quote
    if (strlen(buffer) > (lineEnd + 21)) {
      strcpy(buffer, "\"");
      strcat(buffer, wholeLine);
      strcat(buffer, "\"");
    }
    
    if (strlen(wholeLine) > (lineEnd + 1 + 20 - 2)) {
      strcpy(buffer, "\"");
      strcat(buffer, wholeLine);
      strcat(buffer, "\"");
    }
    
    for (int j = 1; j < 22; j += 1) {
      if (String(buffer[j+lineEnd]) == " ") {
        currentLineEnd = lineEnd + j;
      }
      if (strlen(buffer) == (lineEnd + j)) {
        currentLineEnd = lineEnd + j;
      }
    }
    String fourthLn = (String(buffer)).substring((lineEnd + 1),currentLineEnd);
    lineEnd = currentLineEnd; 

    //print each character of each line in 50ms intervals
    lcd.setCursor(0, 0);
    char a[firstLn.length() + 1];
    firstLn.toCharArray(a, firstLn.length() + 1);
    for (int k = 0; k < strlen(a); k += 1) {
      lcd.print(a[k]);
      delay(50);
    }
    
    lcd.setCursor(0, 1);
    char b[secondLn.length() + 1];
    secondLn.toCharArray(b, secondLn.length() + 1);
    for (int k = 0; k < strlen(b); k += 1) {
      lcd.print(b[k]);
      delay(50);
    }
    
    lcd.setCursor(0, 2);
      char c[thirdLn.length() + 1];
    thirdLn.toCharArray(c, thirdLn.length() + 1);
    for (int k = 0; k < strlen(c); k += 1) {
      lcd.print(c[k]);
      delay(50);
    }
  
    lcd.setCursor(0, 3);
    char d[fourthLn.length() + 1];
    fourthLn.toCharArray(d, fourthLn.length() + 1);
    for (int k = 0; k < strlen(d); k += 1) {
      lcd.print(d[k]);
      delay(50);
    }
  }

  currentMillis = millis();
  unsigned long quoteLnSec =  ( unsigned long ) count;
  unsigned long quoteLn = quoteLnSec*1000;
  unsigned long longTime = currentMillis - previousMillis;

  // check if the quote duration has exceeded
  if (longTime >= quoteLn) {
    // save the last time the quote changed
    previousMillis = currentMillis;

    int randomNum = round(random(rando));
    Serial.println(randomNum);
    lcd.clear();
    strcpy_P(wholeLine, (char *)pgm_read_word(&(quotes[randomNum][1])));
    strcpy_P(author, (char *)pgm_read_word(&(quotes[randomNum][0])));
    
    strcpy(buffer, "\"");
    strcat(buffer, wholeLine);
    strcat(buffer, "\"");
  
    if (strlen(author) != 0) {
      strcat(buffer, " - ");
      strcat(buffer, author);
    }
    
    int lineEnd;
    int currentLineEnd;
    for (int j = 0; j < 21; j += 1) {
      if (String(buffer[j]) == " ") {
        lineEnd = j;
      }
    }
    String firstLn = (String(buffer)).substring(0,lineEnd);
    
    for (int j = 1; j < 22; j += 1) {
      if (String(buffer[j+lineEnd]) == " ") {
        currentLineEnd = lineEnd + j;
      }
    }
    String secondLn = (String(buffer)).substring((lineEnd + 1),currentLineEnd);
    
    lineEnd = currentLineEnd;
    for (int j = 1; j < 22; j += 1) {
      if (String(buffer[j+lineEnd]) == " ") {
        currentLineEnd = lineEnd + j;
      }
    }
    String thirdLn = (String(buffer)).substring((lineEnd + 1),currentLineEnd);
    
    lineEnd = currentLineEnd;
  
    if (strlen(buffer) > (lineEnd + 21)) {
      strcpy(buffer, "\"");
      strcat(buffer, wholeLine);
      strcat(buffer, "\"");
    }
    
    if (strlen(wholeLine) > (lineEnd + 1 + 20 - 2)) {
      strcpy(buffer, "\"");
      strcat(buffer, wholeLine);
      strcat(buffer, "\"");
    }
    
    for (int j = 1; j < 22; j += 1) {
      if (String(buffer[j+lineEnd]) == " ") {
        currentLineEnd = lineEnd + j;
      }
      if (strlen(buffer) == (lineEnd + j)) {
        currentLineEnd = lineEnd + j;
      }
    }
    String fourthLn = (String(buffer)).substring((lineEnd + 1),currentLineEnd);
    lineEnd = currentLineEnd; 
  
    lcd.setCursor(0, 0);
    char a[firstLn.length() + 1];
    firstLn.toCharArray(a, firstLn.length() + 1);
    for (int k = 0; k < strlen(a); k += 1) {
      lcd.print(a[k]);
      delay(50);
    }
    
    lcd.setCursor(0, 1);
    char b[secondLn.length() + 1];
    secondLn.toCharArray(b, secondLn.length() + 1);
    for (int k = 0; k < strlen(b); k += 1) {
      lcd.print(b[k]);
      delay(50);
    }
    
    lcd.setCursor(0, 2);
      char c[thirdLn.length() + 1];
    thirdLn.toCharArray(c, thirdLn.length() + 1);
    for (int k = 0; k < strlen(c); k += 1) {
      lcd.print(c[k]);
      delay(50);
    }
  
    lcd.setCursor(0, 3);
    char d[fourthLn.length() + 1];
    fourthLn.toCharArray(d, fourthLn.length() + 1);
    for (int k = 0; k < strlen(d); k += 1) {
      lcd.print(d[k]);
      delay(50);
    }
  }

  delay(2000);
  increment ++;
}

// rotary encoder function to record position change 
void doEncoder()
{
  if (digitalRead(encoder0PinA) == digitalRead(encoder0PinB))
  {
  encoder0Pos++;
  }
  else
  {
  encoder0Pos--;
  }
  // scale valRotary so it increases/decreases the seconds appropriately
  valRotary = encoder0Pos*2;
}
