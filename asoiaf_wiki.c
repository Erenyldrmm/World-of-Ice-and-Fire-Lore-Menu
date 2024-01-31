#include <stdio.h>
int main()
{
    int fm,house,pet,baratheon,lannister,stark,greyjoy,tyrell,martell,x; 
    x=1;
    while (x>0) {
    printf("Knowledge of World of Ice And Fire\n\n1)Synopsis of the ASOIAF\n2)Houses\n3)The Successors of The Iron Throne\n4)Famous Pets\n");
    scanf("%d" ,&fm);
    if (fm == 1)
    {
        printf("The story of A Song of Ice and Fire takes place in a fictional world, primarily on a continent called Westeros but also on a large landmass to the east, known as Essos.Most of the characters are\nhuman but as the series progresses others are introduced, such as the cold and menacing supernatural Others from the far North and fire-breathing dragons from the East, both thought to be extinct\nby the humans of the story.There are three principal story lines in the series: the chronicling of a dynastic civil war for control of Westeros among several competing families; the rising threat\nof the Others, who dwell beyond an immense wall of ice that forms Westeros' northern border;and the ambition of Daenerys Targaryen, the exiled daughter of a king who was murdered in another civil\nwar fifteen years before, to return to Westeros and claim her rightful throne.As the series progresses, the three story lines become increasingly interwoven and dependent upon each other.\n");
        scanf("%d");
    }
    else if (fm == 2)
    {
        printf("1)Baratheons\n2)Lannisters\n3)Starks\n4)Greyjoys\n5)Tyrell\n6)Martell\n");
        scanf("%d" ,&house);
    }
    else if (fm == 3)
    {
        printf("1-Aegon I Targaryen\n2-Aenys I Targaryen\n3-Maegor I Targaryen\n4-Jaehaerys I Targaryen\n5-Viserys I Targaryen\n6-Aegon II Targaryen\n7-Aegon III Targaryen\n8-Daeron I Targaryen\n9-Baelor I Targaryen\n10-Viserys II Targaryen\n11-Aegon IV Targaryen\n12-Daeron II Targaryen\n13-Aerys I Targaryen\n14-Maekar Targaryen\n15-Aegon V Targaryen\n16-Jaehaerys II Targaryen\n17-Aerys II Targaryen\n18-Robert I Baratheon\n19-Joffrey I Baratheon\n20-Tommen I Baratheon\n21-Cersei I Baratheon\n");
        scanf("%d");
    }
    else if (fm == 4)
    {
        printf("Direwolves:\n1-Ghost\n2-Grey Wind\n3-Lady\n4-Nymeria\n5-Shaggydog\n6-Summer\n\nDragons:\n1-Arrax\n2-Balerion The Black Dread\n3-The Cannibal\n4-Caraxes\n5-Dreamfyre\n6-Drogon\n7-Grey Ghost\n8-Meleys\n9-Meraxes\n10-Moondancer\n11-Morghul\n12-Morning\n13-Quicksilver\n14-Rhaegal\n15-Seasmoke\n16-Sheepstealer\n17-Shrykos\n18-Silverwing\n19-Stormcloud\n20-Sunfyre\n21-Syrax\n22-Terrax\n23-Tessarion\n24-Tyraxes\n25-Vermax\n26-Vermithor\n27-Vhagar\n28-Viserion");
        scanf("%d" ,&pet);
    }
    if (house == 1)
    {
        printf("House Baratheon of Storm's End is one of the Great Houses of Westeros, and is the principal house in the stormlands, which they rule as Lords Paramount of the Stormlands. Their seat, Storm's End, is an ancient castle raised by the Storm Kings from the now-extinct House Durrandon. The Baratheon sigil is a crowned black stag on a field of gold.Members of the family tend to be tall and powerfully built, with black hair and blue eyes, as well as strong, square jawlines. They are known for their mercurial tempers, and their words are ""Ours is the Fury"".After Robert's Rebellion, House Baratheon split into three branches: Lord Robert Baratheon was crowned king and took residence at King's Landing, thereby creating House Baratheon of King's Landing. Robert gave the seat of Dragonstone to his younger brother, Stannis, creating House Baratheon of Dragonstone. Robert's youngest brother, Renly, became the Lord of Storm's End, continuing House Baratheon of Storm's End.\nMembers:\n1-Robert Baratheon\n2-Stannis Baratheon\n3-Renly Baratheon\n");
        scanf("%d" ,&baratheon);
    }
    else if (house == 2)
    {
       printf("House Lannister of Casterly Rock is one of the Great Houses of Seven Kingdoms, and the principal house of the westerlands. Their seat is Casterly Rock, though another branch exists in nearby Lannisport. Their sigil is a golden lion on a field of crimson.Their official motto is ""Hear Me Roar!"" However, their unofficial motto, equally well known, is ""A Lannister always pays his debts.""The Warden of the West is a Lannister by tradition. Their gold mines have made the Lannisters the wealthiest of the Great Houses.The current Lord of Casterly Rock is Tywin Lannister, whose daughter Cersei is the queen of King Robert I Baratheon, while her twin, Ser Jaime, is a knight of Robert's Kingsguard. Tywin's youngest child is Tyrion, a dwarf.\nMembers:\n1-Tywin\n2-Cersei\n3-Jaime\n4-Tyrion\n");
       scanf("%d" ,&lannister);
    }
    else if (house == 3)
    {
       printf("House Stark of Winterfell is one of the Great Houses of Westeros and the principal noble house of the north. In days of old they ruled as Kings of Winter, but since Aegon's Conquest they have been Wardens of the North and ruled as Lords of Winterfell. Their seat, Winterfell, is an ancient castle renowned for its strength.Their sigil is a grey direwolf racing across a field of white. Their words are ""Winter is Coming"", one of only a few house mottoes to be a warning rather than a boast. Several of the POV characters of A Song of Ice and Fire are members of House Stark.\nMembers:\n1-Eddard\n2-Robb\n3-Sansa\n4-Arya\n5-Brandon\n6-Rickon\n7-Jon Snow(Bastard)\n8-Lyanna\n9-Benjen\n");
       scanf("%d" ,&stark);
    }
    else if (house == 4)
    {
        printf("House Greyjoy of Pyke is one of the Great Houses of Westeros. It rules over the Iron Islands, a harsh and bleak collection of forbidding islands off the west coast of Westeros, from the Seastone Chair in the castle of Pyke on the island of the same name. The head of the family is traditionally known as the Lord Reaper of Pyke. Their sigil is a golden kraken on a black field, and their house motto is ""We Do Not Sow.""\nMembers:\n1-Theon\n2-Balon\n3-Asha\n4-Euron\n");
        scanf("%d" ,&greyjoy);
    }
    else if (house == 5)
    {
        printf("House Tyrell of Highgarden is one of the Great Houses of the Seven Kingdoms, being Lords Paramount of the Mander and the liege lords of the Reach. A large, wealthy house, its wealth is only surpassed among the Great Houses by House Lannister, and the Tyrells can field the greatest armies. Additionally, if they call the ships of the Redwyne fleet, the lords of the Shield Islands, and the coastal lords, they can command a navy that equals if not surpasses the royal fleet of King's Landing.Highgarden is an ancient seat of rule and the heart of chivalry in the Seven Kingdoms; the Tyrells style themselves 'Defenders of the Marches' and 'High Marshals of the Reach', and traditionally, they have been Wardens of the South in addition to Lords Paramount of the Mander. Their sigil is a golden rose on a green field, and their words are ""Growing Strong"".Members of the family tend to have curly brown hair and brown eyes.\nMembers:\n1-Olenna\n2-Margaery\n3-Loras\n4-Mace\n");
        scanf("%d" ,&tyrell);
    }
    else if (house == 6)
    {
        printf("House Nymeros Martell of Sunspear, usually simply called House Martell, is one of the Great Houses of the Seven Kingdoms and the ruling house of Dorne. ""Nymeros"" indicates ""of the line of Nymeria,"" referring to the union of the Martells with the Rhoynish warrior queen Nymeria around 700 BC. The Prince of Dorne rules from Sunspear in southeastern Dorne.The Martells of old used a spear as their emblem, while Nymeria and her Rhoynar used the sun as theirs. When Nymeria wed Lord Mors Martell, the symbols were combined into a gold spear piercing a red sun on an orange field. Their words are Unbowed, Unbent, Unbroken.In appearance they are what Daeron I Targaryen considered salty Dornishmen, with dark eyes, dark hair in ringlets, and olive skin.\nMembers:\n1-Oberyn\n2-Doran\n");
        scanf("%d" ,&martell);
    }
    if (baratheon == 1)
    {
        printf("Robert I Baratheon is the King of the Andals, the Rhoynar, and the First Men, Lord of the Seven Kingdoms and Protector of the Realm of Westeros, and the head of House Baratheon of King's Landing. Robert was crowned king after King Aerys II Targaryen, his first cousin once removed, was killed during Robert's Rebellion. Following the war, Robert married Cersei Lannister to ensure political stability. With her, Robert has three children: Joffrey, Myrcella, and Tommen.");
        scanf("%d");
    }
    else if (baratheon == 2)
    {
        printf("Stannis Baratheon is the head of House Baratheon of Dragonstone and the Lord of Dragonstone. He is the secondborn son of Steffon Baratheon, Lord of Storm's End, and Lady Cassana Estermont.He has an older brother, King Robert I Baratheon, and a younger brother, Lord Renly Baratheon. Stannis serves on Robert's small council as the master of ships.");
        scanf("%d");
    }
    else if (baratheon == 3)
    {
        printf("Renly Baratheon is the Lord of Storm's End and Lord Paramount of the Stormlands. The younger brother of King Robert I and Lord Stannis, Renly serves as master of laws on Robert's small council.");
        scanf("%d");
    }
    if (lannister == 1)
    {
        printf("Tywin Lannister is Lord of Casterly Rock, Shield of Lannisport, and Warden of the West. The head of House Lannister, Tywin is one of the most powerful lords in Westeros, and he is the father of Queen Cersei, Ser Jaime of the Kingsguard, and Tyrion.");
        scanf("%d");
    }
    else if (lannister == 2)
    {
        printf("Queen Cersei Lannister is the only daughter and eldest child of Lord Tywin Lannister of Casterly Rock and his wife, Lady Joanna Lannister. She is the twin of her younger brother, Ser Jaime Lannister.After Robert's Rebellion, Cersei married King Robert I Baratheon and became Queen of the Seven Kingdoms. She is the mother of Prince Joffrey, Princess Myrcella, and Prince Tommen of House Baratheon of King's Landing.");
        scanf("%d");
    }
    else if (lannister == 3)
    {
        printf("Ser Jaime Lannister, also known as the Kingslayer, is a knight from House Lannister. He is the second child and first-born son of Lord Tywin Lannister of Casterly Rock and his wife, Lady Joanna, also of House Lannister. He is the twin brother of Queen Cersei Lannister.Raised at the age of fifteen to the Kingsguard of the Mad King, Aerys II Targaryen, Jaime became the youngest member in the history of the prestigious knightly order.He earned the derogatory nickname ""Kingslayer"" when he treasonously slew Aerys near the end of Robert's Rebellion.");
        scanf("%d");
    }
    else if (lannister == 4)
    {
        printf("Tyrion Lannister is a member of House Lannister and is the third and youngest child of Lord Tywin Lannister and the late Lady Joanna Lannister. His older siblings are Cersei Lannister, the queen of King Robert I Baratheon, and Ser Jaime Lannister, a knight of Robert's Kingsguard.Tyrion is a dwarf; because of this he is sometimes called the Imp and the Halfman.");
        scanf("%d");
    }
    if (stark == 1)
    {
        printf("Eddard Stark, also called ""Ned"", is the head of House Stark, Lord of Winterfell, and Warden of the North. He is a close friend to King Robert I Baratheon, with whom he was raised.");
        scanf("%d");
    }
    else if (stark == 2)
    {
        printf("Robb Stark is the eldest son of Eddard Stark and Catelyn Tully and is the heir of House Stark to Winterfell and the north. He is called the Young Wolf by friend and foe alike.");
        scanf("%d");
    }
    else if (stark == 3)
    {
        printf("Sansa Stark is a member of House Stark and is the elder daughter of Lady Catelyn and Lord Eddard Stark. She has three brothers: Robb, Bran and Rickon; a younger sister: Arya; and a half-brother: Jon Snow.");
        scanf("%d");
    }
    else if (stark == 4)
    {
        printf("Arya Stark is the third child and second daughter of Lord Eddard Stark and Lady Catelyn Tully. A member of House Stark, she has five siblings: brothers Robb, Bran, Rickon, half-brother Jon Snow, and older sister Sansa.Like some of her siblings, Arya sometimes dreams that she is a direwolf.Her own direwolf is Nymeria, who is named in reference to the Rhoynar warrior-queen of the same name.");
        scanf("%d");
    }
    else if (stark == 5)
    {
        printf("Brandon Stark, typically called Bran, is the second son of Lord Eddard Stark and Lady Catelyn Tully.He has four older siblings—Robb, Jon, Sansa, Arya—and one younger—Rickon. Like his siblings, he is constantly accompanied by his direwolf, Summer, with whom he shares a strong warg connection.He is seven years old at the beginning of A Game of Thrones.");
        scanf("%d");
    }
    else if (stark == 6)
    {
        printf("Rickon Stark is Eddard and Catelyn's youngest child, only three years old when the series begins. Rickon is a naturally aggressive and strong-willed child, but his youth makes it difficult for him to cope with the terrible changes that come to his family and life. He is usually accompanied by his direwolf, Shaggydog.");
        scanf("%d");
    }
    else if (stark == 7)
    {
        printf("Jon Snow is the bastard son of Eddard Stark, Lord of Winterfell.He has five half-siblings: Robb, Sansa, Arya, Bran, and Rickon Stark. Unaware of the identity of his mother,Jon was raised at Winterfell. At the age of fourteen, he joins the Night's Watch, where he earns the nickname Lord Snow.");
        scanf("%d");
    }
    else if (stark == 8)
    {
        printf("Lyanna Stark was the only daughter of Lord Rickard Stark and his wife, Lady Lyarra Stark. She had two older brothers, Brandon and Eddard, and one younger brother, Benjen. Her abduction by Prince Rhaegar Targaryen was the event that ultimately triggered Robert's Rebellion and led to the downfall of the Targaryen dynasty.");
        scanf("%d");
    }
    else if (stark == 9)
    {
        printf("Benjen Stark, also known as Ben Stark,[7] is the First Ranger of the Night's Watch and the younger brother of Lord Eddard Stark of Winterfell.");
        scanf("%d");
    }
    if (greyjoy == 1)
    {
        printf("Theon Greyjoy is a member of House Greyjoy and is the sole surviving son and heir apparent of Balon Greyjoy, Lord of the Iron Islands. At the end of Greyjoy's Rebellion, Theon was taken to Winterfell as a hostage and ward to Lord Eddard Stark.");
        scanf("%d");
    }
    else if (greyjoy == 2)
    {
        printf("Balon Greyjoy is the Lord of the Iron Islands and the head of House Greyjoy of Pyke. The captain of the Great Kraken,[7] he is a follower of the Old Way of the ironborn and desires to bring them back to prominence. In 289 AC he proclaimed their independence from the Iron Throne, but Greyjoy's Rebellion was defeated by King Robert I Baratheon's forces.");
        scanf("%d");
    }
    else if (greyjoy == 3)
    {
        printf("Asha Greyjoy is a member of House Greyjoy and is the daughter of Lord Balon Greyjoy by his wife, Alannys Harlaw.");
        scanf("%d");
    }
    else if (greyjoy == 4)
    {
        printf("Euron Greyjoy, known as Crow's Eye[1] and Euron Crow's Eye,[2] is a member of House Greyjoy and is the eldest of Lord Balon Greyjoy's younger brothers.Euron is captain of the Silence, a ship crewed entirely by mutes whose tongues he ripped out. Euron's personal coat-of-arms is a red eye with a black pupil beneath a black iron crown supported by two crows.");
        scanf("%d");
    }
    if (tyrell == 1)
    {
        printf("Olenna Tyrell,Redwyne,is the widow of Lord Luthor Tyrell and the mother of Mace Tyrell, Lord of Highgarden. Born into House Redwyne of the Arbor, she is commonly known as the Queen of Thorns because of her sharp tongue.");
        scanf("%d");
    }
    else if (tyrell == 2 )
    {
        printf("Margaery Tyrell is the only daughter of Lord Mace Tyrell and his wife, Lady Alerie Hightower.");
        scanf("%d");
    }
    else if (tyrell == 3)
    {
        printf("Ser Loras Tyrell, also known as the Knight of Flowers,[3] is a knight from House Tyrell and the third son of Lord Mace Tyrell of Highgarden and his wife, Lady Alerie Hightower. He is a highly skilled knight and jouster. His tournament successes, dazzling good looks, and ostentatious showmanship has made him a celebrated figure in the courts of the Seven Kingdoms.His personal coat of arms is three golden roses on a field of green, indicating his position as a third son.");
        scanf("%d");
    }
    else if (tyrell == 4)
    {
        printf("Mace Tyrell is the Lord of Highgarden, Lord Paramount of the Mander, Defender of the Marches, High Marshal of the Reach, Warden of the South, and head of House Tyrell.");
        scanf("%d");
    }
    if (martell == 1)
    {
        printf("Prince Oberyn Nymeros Martell, also known as the Red Viper, is a member of House Martell and is the younger brother of Doran Martell, Prince of Dorne. Oberyn has eight bastard daughters called the Sand Snakes, the four youngest of whom are by his current paramour, Ellaria Sand.");
        scanf("%d");
    }
    else if (martell == 2)
    {
        printf("Prince Doran Nymeros Martell, also known simply as Doran Martell, is the head of House Martell, the Prince of Dorne, and the Lord of Sunspear. Married to Lady Mellario, of the Free City of Norvos, he has three children: Arianne, Quentyn, and Trystane. He's also the elder brother of Elia and Oberyn Martell.");
        scanf("%d");
    } 
    }
    return 0;
}