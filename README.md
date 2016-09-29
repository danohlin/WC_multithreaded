# WC_multithreaded
word count in C using multithreading

This sourcecode will compile (using the included Makefile) into a properly running executable called Countfolder. Countfolder should reside in the directory that contains list_file.txt as well as the subdirectory CountingFolder.

The below results were obtained when I ran the Countfolder program.

-bash-4.1$ Countfolder
Counting files ...
Threadid 1 processes 1_100.txt which has 521 characters, 94 words and 3 lines
Threadid 1 processes 1_101.txt which has 286 characters, 50 words and 3 lines
Threadid 1 processes 1_10.txt which has 234 characters, 36 words and 3 lines
Threadid 1 processes 1_11.txt which has 255 characters, 41 words and 3 lines
Threadid 1 processes 1_12.txt which has 464 characters, 73 words and 3 lines
Threadid 1 processes 1_13.txt which has 271 characters, 45 words and 3 lines
Threadid 1 processes 1_14.txt which has 122 characters, 20 words and 1 lines
Threadid 1 processes 1_15.txt which has 239 characters, 41 words and 3 lines
Threadid 1 processes 1_16.txt which has 357 characters, 56 words and 3 lines
Threadid 1 processes 1_17.txt which has 361 characters, 58 words and 3 lines
Threadid 1 processes 1_18.txt which has 533 characters, 88 words and 3 lines
Threadid 1 processes 1_19.txt which has 240 characters, 37 words and 3 lines
Threadid 1 processes 1_1.txt which has 279 characters, 42 words and 3 lines
Threadid 1 processes 1_20.txt which has 236 characters, 40 words and 3 lines
Threadid 1 processes 1_21.txt which has 278 characters, 44 words and 3 lines
Threadid 1 processes 1_22.txt which has 145 characters, 22 words and 3 lines
Threadid 1 processes 1_23.txt which has 580 characters, 96 words and 3 lines
Threadid 1 processes 1_24.txt which has 128 characters, 20 words and 3 lines
Threadid 1 processes 1_25.txt which has 40 characters, 5 words and 1 lines
Threadid 1 processes 1_26.txt which has 42 characters, 4 words and 1 lines
Threadid 1 processes 1_27.txt which has 25 characters, 3 words and 1 lines
Threadid 1 processes 1_28.txt which has 23 characters, 2 words and 1 lines
Threadid 1 processes 1_29.txt which has 36 characters, 3 words and 1 lines
Threadid 1 processes 1_2.txt which has 201 characters, 29 words and 3 lines
Threadid 1 processes 1_30.txt which has 54 characters, 8 words and 1 lines
Threadid 1 processes 1_31.txt which has 25 characters, 3 words and 1 lines
Threadid 1 processes 1_32.txt which has 72 characters, 9 words and 1 lines
Threadid 1 processes 1_33.txt which has 25 characters, 2 words and 1 lines
Threadid 1 processes 1_34.txt which has 23 characters, 2 words and 1 lines
Threadid 1 processes 1_35.txt which has 23 characters, 2 words and 1 lines
Threadid 1 processes 1_36.txt which has 25 characters, 2 words and 1 lines
Threadid 1 processes 1_37.txt which has 49 characters, 7 words and 1 lines
Threadid 1 processes 1_38.txt which has 78 characters, 11 words and 1 lines
Threadid 1 processes 1_39.txt which has 118 characters, 20 words and 1 lines
Threadid 1 processes 1_3.txt which has 384 characters, 52 words and 3 lines
Threadid 1 processes 1_40.txt which has 0 characters, 0 words and 0 lines
Threadid 1 processes 1_41.txt which has 23 characters, 2 words and 1 lines
Threadid 1 processes 1_42.txt which has 32 characters, 3 words and 1 lines
Threadid 1 processes 1_43.txt which has 65 characters, 7 words and 1 lines
Threadid 1 processes 1_44.txt which has 52 characters, 6 words and 1 lines
Threadid 1 processes 1_45.txt which has 58 characters, 8 words and 1 lines
Threadid 1 processes 1_46.txt which has 48 characters, 6 words and 1 lines
Threadid 1 processes 1_47.txt which has 47 characters, 6 words and 1 lines
Threadid 1 processes 1_48.txt which has 49 characters, 8 words and 1 lines
Threadid 1 processes 1_49.txt which has 19 characters, 2 words and 1 lines
Threadid 1 processes 1_4.txt which has 244 characters, 36 words and 3 lines
Threadid 1 processes 1_50.txt which has 46 characters, 6 words and 1 lines
Threadid 1 processes 1_51.txt which has 48 characters, 6 words and 1 lines
Threadid 1 processes 1_52.txt which has 57 characters, 7 words and 1 lines
Threadid 1 processes 1_53.txt which has 49 characters, 8 words and 1 lines
Threadid 1 processes 1_54.txt which has 49 characters, 8 words and 1 lines
Threadid 1 processes 1_55.txt which has 49 characters, 8 words and 1 lines
Threadid 1 processes 1_56.txt which has 49 characters, 8 words and 1 lines
Threadid 1 processes 1_57.txt which has 49 characters, 8 words and 1 lines
Threadid 1 processes 1_58.txt which has 49 characters, 8 words and 1 lines
Threadid 1 processes 1_59.txt which has 49 characters, 8 words and 1 lines
Threadid 1 processes 1_5.txt which has 259 characters, 42 words and 3 lines
Threadid 1 processes 1_60.txt which has 49 characters, 7 words and 1 lines
Threadid 1 processes 1_61.txt which has 49 characters, 7 words and 1 lines
Threadid 1 processes 1_62.txt which has 49 characters, 7 words and 1 lines
-------------------------Processes finished for Thread 1 ------------------------------
Threadid 2 processes 1_63.txt which has 49 characters, 7 words and 1 lines
Threadid 2 processes 1_64.txt which has 49 characters, 7 words and 1 lines
Threadid 2 processes 1_65.txt which has 49 characters, 7 words and 1 lines
Threadid 2 processes 1_66.txt which has 49 characters, 7 words and 1 lines
Threadid 2 processes 1_67.txt which has 49 characters, 7 words and 1 lines
Threadid 2 processes 1_68.txt which has 49 characters, 7 words and 1 lines
Threadid 2 processes 1_69.txt which has 49 characters, 7 words and 1 lines
Threadid 2 processes 1_6.txt which has 314 characters, 51 words and 3 lines
Threadid 2 processes 1_70.txt which has 49 characters, 7 words and 1 lines
Threadid 2 processes 1_71.txt which has 324 characters, 57 words and 3 lines
Threadid 2 processes 1_72.txt which has 283 characters, 57 words and 4 lines
Threadid 2 processes 1_73.txt which has 53 characters, 10 words and 1 lines
Threadid 2 processes 1_74.txt which has 122 characters, 26 words and 1 lines
Threadid 2 processes 1_75.txt which has 122 characters, 26 words and 1 lines
Threadid 2 processes 1_76.txt which has 40 characters, 5 words and 1 lines
Threadid 2 processes 1_77.txt which has 40 characters, 5 words and 1 lines
Threadid 2 processes 1_78.txt which has 39 characters, 5 words and 1 lines
Threadid 2 processes 1_79.txt which has 39 characters, 5 words and 1 lines
Threadid 2 processes 1_7.txt which has 99 characters, 16 words and 1 lines
Threadid 2 processes 1_80.txt which has 3095 characters, 531 words and 21 lines
Threadid 2 processes 1_81.txt which has 39 characters, 6 words and 1 lines
Threadid 2 processes 1_82.txt which has 39 characters, 6 words and 1 lines
Threadid 2 processes 1_83.txt which has 134 characters, 24 words and 1 lines
Threadid 2 processes 1_84.txt which has 134 characters, 24 words and 1 lines
Threadid 2 processes 1_85.txt which has 134 characters, 24 words and 1 lines
Threadid 2 processes 1_86.txt which has 52 characters, 9 words and 1 lines
Threadid 2 processes 1_87.txt which has 328 characters, 65 words and 3 lines
Threadid 2 processes 1_88.txt which has 457 characters, 81 words and 3 lines
Threadid 2 processes 1_89.txt which has 557 characters, 93 words and 3 lines
Threadid 2 processes 1_8.txt which has 245 characters, 39 words and 3 lines
Threadid 2 processes 1_90.txt which has 367 characters, 63 words and 3 lines
Threadid 2 processes 1_91.txt which has 258 characters, 41 words and 3 lines
Threadid 2 processes 1_92.txt which has 232 characters, 38 words and 3 lines
Threadid 2 processes 1_93.txt which has 249 characters, 38 words and 3 lines
Threadid 2 processes 1_94.txt which has 350 characters, 62 words and 3 lines
Threadid 2 processes 1_95.txt which has 320 characters, 53 words and 3 lines
Threadid 2 processes 1_96.txt which has 437 characters, 78 words and 3 lines
Threadid 2 processes 1_97.txt which has 325 characters, 48 words and 3 lines
Threadid 2 processes 1_98.txt which has 99 characters, 13 words and 1 lines
Threadid 2 processes 1_99.txt which has 371 characters, 62 words and 3 lines
Threadid 2 processes 1_9.txt which has 191 characters, 31 words and 3 lines
Threadid 2 processes 2_100.txt which has 236 characters, 43 words and 3 lines
Threadid 2 processes 2_101.txt which has 269 characters, 43 words and 3 lines
Threadid 2 processes 2_10.txt which has 331 characters, 56 words and 3 lines
Threadid 2 processes 2_11.txt which has 470 characters, 79 words and 3 lines
Threadid 2 processes 2_12.txt which has 247 characters, 40 words and 3 lines
Threadid 2 processes 2_13.txt which has 339 characters, 61 words and 3 lines
Threadid 2 processes 2_14.txt which has 287 characters, 52 words and 3 lines
Threadid 2 processes 2_15.txt which has 399 characters, 65 words and 3 lines
Threadid 2 processes 2_16.txt which has 277 characters, 42 words and 3 lines
Threadid 2 processes 2_17.txt which has 254 characters, 43 words and 3 lines
Threadid 2 processes 2_18.txt which has 207 characters, 32 words and 3 lines
Threadid 2 processes 2_19.txt which has 176 characters, 30 words and 3 lines
Threadid 2 processes 2_1.txt which has 120 characters, 24 words and 1 lines
Threadid 2 processes 2_20.txt which has 281 characters, 49 words and 3 lines
Threadid 2 processes 2_21.txt which has 178 characters, 31 words and 3 lines
Threadid 2 processes 2_22.txt which has 183 characters, 23 words and 3 lines
Threadid 2 processes 2_23.txt which has 44 characters, 7 words and 1 lines
Threadid 2 processes 2_24.txt which has 225 characters, 42 words and 3 lines
Threadid 2 processes 2_25.txt which has 83 characters, 13 words and 1 lines
-------------------------Processes finished for Thread 2 ------------------------------
Threadid 3 processes 2_26.txt which has 266 characters, 39 words and 3 lines
Threadid 3 processes 2_27.txt which has 142 characters, 23 words and 3 lines
Threadid 3 processes 2_28.txt which has 170 characters, 27 words and 3 lines
Threadid 3 processes 2_29.txt which has 218 characters, 36 words and 3 lines
Threadid 3 processes 2_2.txt which has 453 characters, 79 words and 2 lines
Threadid 3 processes 2_30.txt which has 133 characters, 20 words and 3 lines
Threadid 3 processes 2_31.txt which has 189 characters, 29 words and 3 lines
Threadid 3 processes 2_32.txt which has 189 characters, 34 words and 3 lines
Threadid 3 processes 2_33.txt which has 327 characters, 53 words and 3 lines
Threadid 3 processes 2_34.txt which has 207 characters, 34 words and 3 lines
Threadid 3 processes 2_35.txt which has 181 characters, 33 words and 3 lines
Threadid 3 processes 2_36.txt which has 142 characters, 23 words and 3 lines
Threadid 3 processes 2_37.txt which has 351 characters, 61 words and 3 lines
Threadid 3 processes 2_38.txt which has 547 characters, 95 words and 5 lines
Threadid 3 processes 2_39.txt which has 547 characters, 95 words and 5 lines
Threadid 3 processes 2_3.txt which has 282 characters, 44 words and 3 lines
Threadid 3 processes 2_40.txt which has 547 characters, 95 words and 5 lines
Threadid 3 processes 2_41.txt which has 547 characters, 95 words and 5 lines
Threadid 3 processes 2_42.txt which has 547 characters, 95 words and 5 lines
Threadid 3 processes 2_43.txt which has 547 characters, 95 words and 5 lines
Threadid 3 processes 2_44.txt which has 547 characters, 95 words and 5 lines
Threadid 3 processes 2_45.txt which has 547 characters, 95 words and 5 lines
Threadid 3 processes 2_46.txt which has 547 characters, 95 words and 5 lines
Threadid 3 processes 2_47.txt which has 75 characters, 16 words and 1 lines
Threadid 3 processes 2_48.txt which has 2392 characters, 429 words and 4 lines
Threadid 3 processes 2_49.txt which has 83 characters, 12 words and 1 lines
Threadid 3 processes 2_4.txt which has 404 characters, 69 words and 3 lines
Threadid 3 processes 2_50.txt which has 83 characters, 12 words and 1 lines
Threadid 3 processes 2_51.txt which has 83 characters, 12 words and 1 lines
Threadid 3 processes 2_52.txt which has 83 characters, 12 words and 1 lines
Threadid 3 processes 2_53.txt which has 681 characters, 125 words and 7 lines
Threadid 3 processes 2_54.txt which has 122 characters, 25 words and 1 lines
Threadid 3 processes 2_55.txt which has 122 characters, 25 words and 1 lines
Threadid 3 processes 2_56.txt which has 40 characters, 5 words and 1 lines
Threadid 3 processes 2_57.txt which has 40 characters, 5 words and 1 lines
Threadid 3 processes 2_58.txt which has 62 characters, 11 words and 1 lines
Threadid 3 processes 2_59.txt which has 51 characters, 9 words and 2 lines
Threadid 3 processes 2_5.txt which has 664 characters, 103 words and 3 lines
Threadid 3 processes 2_60.txt which has 148 characters, 24 words and 3 lines
Threadid 3 processes 2_61.txt which has 216 characters, 33 words and 1 lines
Threadid 3 processes 2_62.txt which has 1921 characters, 323 words and 29 lines
Threadid 3 processes 2_63.txt which has 247 characters, 38 words and 1 lines
Threadid 3 processes 2_64.txt which has 470 characters, 77 words and 3 lines
Threadid 3 processes 2_65.txt which has 427 characters, 69 words and 3 lines
Threadid 3 processes 2_66.txt which has 342 characters, 59 words and 3 lines
Threadid 3 processes 2_67.txt which has 235 characters, 42 words and 3 lines
Threadid 3 processes 2_68.txt which has 333 characters, 58 words and 3 lines
Threadid 3 processes 2_69.txt which has 387 characters, 69 words and 3 lines
Threadid 3 processes 2_6.txt which has 203 characters, 33 words and 3 lines
Threadid 3 processes 2_70.txt which has 280 characters, 47 words and 3 lines
Threadid 3 processes 2_71.txt which has 547 characters, 95 words and 5 lines
Threadid 3 processes 2_72.txt which has 274 characters, 42 words and 3 lines
Threadid 3 processes 2_73.txt which has 217 characters, 32 words and 3 lines
Threadid 3 processes 2_74.txt which has 214 characters, 35 words and 3 lines
Threadid 3 processes 2_75.txt which has 286 characters, 47 words and 3 lines
Threadid 3 processes 2_76.txt which has 219 characters, 36 words and 3 lines
Threadid 3 processes 2_77.txt which has 302 characters, 47 words and 3 lines
Threadid 3 processes 2_78.txt which has 176 characters, 27 words and 1 lines
Threadid 3 processes 2_79.txt which has 547 characters, 95 words and 5 lines
Threadid 3 processes 2_7.txt which has 207 characters, 32 words and 3 lines
-------------------------Processes finished for Thread 3 ------------------------------
Threadid 4 processes 2_80.txt which has 354 characters, 62 words and 3 lines
Threadid 4 processes 2_81.txt which has 343 characters, 58 words and 3 lines
Threadid 4 processes 2_82.txt which has 344 characters, 57 words and 3 lines
Threadid 4 processes 2_83.txt which has 462 characters, 80 words and 3 lines
Threadid 4 processes 2_84.txt which has 241 characters, 38 words and 3 lines
Threadid 4 processes 2_85.txt which has 282 characters, 46 words and 3 lines
Threadid 4 processes 2_86.txt which has 547 characters, 95 words and 5 lines
Threadid 4 processes 2_87.txt which has 54 characters, 7 words and 1 lines
Threadid 4 processes 2_88.txt which has 884 characters, 146 words and 3 lines
Threadid 4 processes 2_89.txt which has 244 characters, 44 words and 3 lines
Threadid 4 processes 2_8.txt which has 186 characters, 35 words and 3 lines
Threadid 4 processes 2_90.txt which has 387 characters, 69 words and 3 lines
Threadid 4 processes 2_91.txt which has 344 characters, 63 words and 3 lines
Threadid 4 processes 2_92.txt which has 333 characters, 54 words and 3 lines
Threadid 4 processes 2_93.txt which has 339 characters, 59 words and 3 lines
Threadid 4 processes 2_94.txt which has 547 characters, 95 words and 5 lines
Threadid 4 processes 2_95.txt which has 240 characters, 36 words and 3 lines
Threadid 4 processes 2_96.txt which has 504 characters, 83 words and 3 lines
Threadid 4 processes 2_97.txt which has 428 characters, 75 words and 3 lines
Threadid 4 processes 2_98.txt which has 226 characters, 35 words and 3 lines
Threadid 4 processes 2_99.txt which has 253 characters, 46 words and 3 lines
Threadid 4 processes 2_9.txt which has 132 characters, 16 words and 3 lines
Threadid 4 processes 3_10.txt which has 0 characters, 0 words and 0 lines
Threadid 4 processes 3_11.txt which has 21 characters, 5 words and 1 lines
Threadid 4 processes 3_12.txt which has 26 characters, 5 words and 1 lines
Threadid 4 processes 3_13.txt which has 34 characters, 4 words and 2 lines
Threadid 4 processes 3_14.txt which has 57 characters, 8 words and 2 lines
Threadid 4 processes 3_15.txt which has 66 characters, 9 words and 2 lines
Threadid 4 processes 3_16.txt which has 35 characters, 6 words and 1 lines
Threadid 4 processes 3_17.txt which has 23 characters, 3 words and 1 lines
Threadid 4 processes 3_18.txt which has 37 characters, 5 words and 1 lines
Threadid 4 processes 3_19.txt which has 29 characters, 5 words and 1 lines
Threadid 4 processes 3_1.txt which has 34 characters, 4 words and 2 lines
Threadid 4 processes 3_20.txt which has 23 characters, 5 words and 1 lines
Threadid 4 processes 3_21.txt which has 17 characters, 3 words and 1 lines
Threadid 4 processes 3_22.txt which has 28 characters, 4 words and 1 lines
Threadid 4 processes 3_23.txt which has 28 characters, 4 words and 1 lines
Threadid 4 processes 3_24.txt which has 20 characters, 3 words and 1 lines
Threadid 4 processes 3_25.txt which has 37 characters, 6 words and 1 lines
Threadid 4 processes 3_26.txt which has 30 characters, 7 words and 1 lines
Threadid 4 processes 3_27.txt which has 25 characters, 3 words and 1 lines
Threadid 4 processes 3_28.txt which has 15 characters, 4 words and 1 lines
Threadid 4 processes 3_29.txt which has 30 characters, 6 words and 1 lines
Threadid 4 processes 3_2.txt which has 34 characters, 4 words and 2 lines
Threadid 4 processes 3_30.txt which has 14 characters, 2 words and 1 lines
Threadid 4 processes 3_31.txt which has 14 characters, 2 words and 1 lines
Threadid 4 processes 3_32.txt which has 19 characters, 3 words and 1 lines
Threadid 4 processes 3_33.txt which has 24 characters, 4 words and 1 lines
Threadid 4 processes 3_34.txt which has 63 characters, 12 words and 1 lines
Threadid 4 processes 3_35.txt which has 27 characters, 5 words and 1 lines
Threadid 4 processes 3_36.txt which has 25 characters, 4 words and 1 lines
Threadid 4 processes 3_37.txt which has 8 characters, 2 words and 1 lines
Threadid 4 processes 3_38.txt which has 17 characters, 2 words and 1 lines
Threadid 4 processes 3_3.txt which has 34 characters, 4 words and 2 lines
Threadid 4 processes 3_4.txt which has 34 characters, 4 words and 2 lines
Threadid 4 processes 3_5.txt which has 34 characters, 4 words and 2 lines
Threadid 4 processes 3_6.txt which has 34 characters, 4 words and 2 lines
Threadid 4 processes 3_7.txt which has 34 characters, 4 words and 2 lines
Threadid 4 processes 3_8.txt which has 34 characters, 4 words and 2 lines
Threadid 4 processes 3_9.txt which has 25 characters, 6 words and 1 lines
-------------------------Processes finished for Thread 4 ------------------------------
-bash-4.1$
