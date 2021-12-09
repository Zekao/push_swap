Verification des arguments : OK
Verification des doublons : OK
reproduction des fonctions push : 
reproduction des fonctions swap : OK
reproduction des fonctions rotate :OK
hardcode 5 et < 5 valeurs : OK
Algo pour moins de 100 valeurs -> : :
Algo pour plus de 100 valeurs et moins de 500 valeurs : Radix Sort : WIP

Radix sort bases:
- Recuperer le plus grand nombre de notre liste
- comparer la valeur la plus a droite entre tous les nombres
    {
        exemple : on a 985712 521 1528 15829 521875 5129872857
        on va recuperer 5129872857 car c'est la plus grande valeur, ensuite on va rajouter des 0 a chaque nombre pour avoir
        le meme nombre de chiffre dans tous les nombres
        -> 0000985712 0000000521 0000001528 0000015829 0000521875 5129872857

        on va ensuite les trier par rapport a la valeur la plus a droite des nombres : 
        0000000521 0000985712 0000521875 5129872857 0000001528 0000015829
        ensuite la valeur d'apres
        0000985712 0000000521 0000001528 0000015829 5129872857 0000521875
        etc...
        0000000521 0000001528 0000985712 0000015829 5129872857 0000521875
        etc etc.....

        pour avoir une maniere plus opti : 
        transformer tous nos nombres en binaire avant de les convertir
    }