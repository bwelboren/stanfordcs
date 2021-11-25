   // ptr to struct
   struct fraction* fracts;

   // allocate the array (pointee)
   fracts = malloc(sizeof(struct fracts) * 100);
   
   int i;

   // use it as an array
   for(i=0;i<99;i++){
    fracts[i].numerator = 22;
    fracts[i].denominator = 7;
   }

    // deallocate pointee, pointer still points to pointee
    free(fracts);
