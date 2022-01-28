#ifdef __cplusplus
extern "c" {
#endif

#define TREEFACTS_URL "https://treefacts-server.mrowllers.repl.co"

typedef struct t_fact {
    unsigned int index;
    char *fact;
} Fact;

/**
* prints a random fact
*/
void *TreeFacts_RandomFact();
/**
* prints today's fact
*/
void *TreeFacts_TodayFact();
/**
* prints the fact of a specific day
* @param day Which fact of the day to get
*/
void *TreeFacts_Fact(int day);
/**
* gets a fact from the specified index
* @param index The index of the fact
*/
void *TreeFacts_FactFromIndex(unsigned int index);


#ifdef __cplusplus
}
#endif