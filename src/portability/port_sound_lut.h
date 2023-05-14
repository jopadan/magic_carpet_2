#pragma once
#ifndef PORT_SOUND_LUT_H
#define PORT_SOUND_LUT_H

struct al_chunk_table {
    uint8_t flags;              // sound format, type, extra options 
    uint8_t ff_fx;              // force-feedback effect id
};
typedef struct al_chunk_table al_ct_t;

al_ct_t alct[3][70] = {
    {                           // day
     {0, 0},                    // id_0 -
     {AL_FORMAT_STEREO8_22050 | AL_TYPE_ENV, 0},        // id_1 OCEAN.WAV
     {AL_FORMAT_STEREO8_22050 | AL_TYPE_ENV, 0},        // id_2 WIND.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_3 EXPLOD3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_4 GAINMANA.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_5 FIRE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_6 ALLY.WAV
     {0, 0},                    // id_7 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_8 DRAGROAR.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_9 FIREBAL1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_10 QUAKE4.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_11 FOOLMANA.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_12 BEE1.WAV
     {0, 0},                    // id_13 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_14 SELECT.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_15 FIREBAL2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_16 DIE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_17 HYDRA.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_18 GETSPELL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_19 SPEEDUP.WAV
     {0, 0},                    // id_20 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_21 PORTMAKE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_22 PORTUSE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_23 LITNING.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_24 EXPLOD3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_25 HEAL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_26 CLANG.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_27 SPLASH2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_28 REBOUND.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_29 CANTUSE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_30 METEOREX.WAV
     {AL_FORMAT_STEREO8_22050 | AL_TYPE_ENV, 0},        // id_31 MARKET.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_32 SPIDER.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_33 ARROW1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_34 ARROW2.WAV
     {0, 0},                    // id_35 NULL.WAV
     {0, 0},                    // id_36 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_37 CYMERIAN.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_38 DEEPONE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_39 WYVERN.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_40 MANASHOT.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_41 SWITCH.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_42 DEVIL.WAV
     {0, 0},                    // id_43 NULL.WAV
     {0, 0},                    // id_44 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_45 FIRE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_46 GOAT.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_47 DOORC2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_48 MWORM3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_49 TORNADO.WAV
     {0, 0},                    // id_50 NULL.WAV
     {0, 0},                    // id_51 NULL.WAV
     {0, 0},                    // id_52 NULL.WAV
     {0, 0},                    // id_53 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_54 HIT1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_55 HIT2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_56 HIT3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_57 HIT4.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_58 MADDOG.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_59 MDWELLER.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_60 MORPH.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_61 SUCCESS2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_62 ZOMBIE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_63 SPELLUP.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_64 GWELL.WAV
     {0, 0},                    // id_65 -
     {0, 0},                    // id_66 -
     {0, 0},                    // id_67 -
     {0, 0},                    // id_68 -
     {0, 0}                     // id_69 -
     },
    {                           // night
     {0, 0},                    // id_0 -
     {AL_FORMAT_STEREO8_22050 | AL_TYPE_ENV, 0},        // id_1 OCEAN.WAV
     {AL_FORMAT_STEREO8_22050 | AL_TYPE_ENV, 0},        // id_2 CRICKET2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_3 EXPLOD3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_4 GAINMANA.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_5 FIRE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_6 ALLY.WAV
     {0, 0},                    // id_7 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_8 DRAGROAR.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_9 FIREBAL1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_10 QUAKE4.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_11 FOOLMANA.WAV
     {0, 0},                    // id_12 NULL.WAV
     {0, 0},                    // id_13 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_14 SELECT.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_15 FIREBAL2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_16 DIE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_17 HYDRA.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_18 GETSPELL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_19 SPEEDUP.WAV
     {0, 0},                    // id_20 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_21 PORTMAKE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_22 PORTUSE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_23 LITNING.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_24 EXPLOD3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_25 HEAL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_26 CLANG.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_27 SPLASH2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_28 REBOUND.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_29 CANTUSE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_30 METEOREX.WAV
     {AL_FORMAT_STEREO8_22050 | AL_TYPE_ENV, 0},        // id_31 MARKET.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_32 SPIDER.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_33 ARROW1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_34 ARROW2.WAV
     {0, 0},                    // id_35 NULL.WAV
     {0, 0},                    // id_36 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_37 CYMERIAN.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_38 DEEPONE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_39 WYVERN.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_40 MANASHOT.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_41 SWITCH.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_42 DEVIL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_43 FIREFLY1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_44 FIREFLY2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_45 FIRE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_46 GOAT.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_47 DOORC2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_48 MWORM3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_49 TORNADO.WAV
     {0, 0},                    // id_50 NULL.WAV
     {0, 0},                    // id_51 NULL.WAV
     {0, 0},                    // id_52 NULL.WAV
     {0, 0},                    // id_53 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_54 HIT1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_55 HIT2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_56 HIT3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_57 HIT4.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_58 MADDOG.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_59 MDWELLER.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_60 MORPH.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_61 SUCCESS2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_62 ZOMBIE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_63 SPELLUP.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_64 GWELL.WAV
     {0, 0},                    // id_65 -
     {0, 0},                    // id_66 -
     {0, 0},                    // id_67 -
     {0, 0},                    // id_68 -
     {0, 0}                     // id_69 -
     },
    {                           // cave
     {0, 0},                    // id_0 -
     {0, 0},                    // id_1 NULL.WAV
     {0, 0},                    // id_2 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_3 EXPLOD3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_4 GAINMANA.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_5 FIRE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_6 ALLY.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_7 CAVEMAN.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_8 DRAGROAR.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_9 FIREBAL1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_10 QUAKE4.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_11 FOOLMANA.WAV
     {0, 0},                    // id_12 NULL.WAV
     {0, 0},                    // id_13 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_14 SELECT.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_15 FIREBAL2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_16 DIE.WAV
     {0, 0},                    // id_17 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_18 GETSPELL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_19 SPEEDUP.WAV
     {0, 0},                    // id_20 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_21 PORTMAKE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_22 PORTUSE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_23 LITNING.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_24 EXPLOD3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_25 HEAL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_26 CLANG.WAV
     {0, 0},                    // id_27 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_28 REBOUND.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_29 CANTUSE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_30 METEOREX.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_31 MARKET.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_32 SPIDER.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_33 ARROW1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_34 ARROW2.WAV
     {0, 0},                    // id_35 NULL.WAV
     {0, 0},                    // id_36 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_37 CYMERIAN.WAV
     {0, 0},                    // id_38 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_39 WYVERN.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_40 MANASHOT.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_41 SWITCH.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_42 DEVIL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_43 FIREFLY1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_44 FIREFLY2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_45 FIRE.WAV
     {0, 0},                    // id_46 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_47 DOORC2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_48 MWORM3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_49 TORNADO.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_50 GLOOP1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_51 GLOOP2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_52 GLOOP3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_53 GLOOP4.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_54 HIT1.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_55 HIT2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_56 HIT3.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_57 HIT4.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_58 MADDOG.WAV
     {0, 0},                    // id_59 NULL.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_60 MORPH.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_61 SUCCESS2.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_62 ZOMBIE.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_63 SPELLUP.WAV
     {AL_FORMAT_MONO8_22050, 0},        // id_64 GWELL.WAV
     {AL_FORMAT_STEREO8_22050 | AL_TYPE_ENV, 0},        // id_65 DRIP1.WAV
     {AL_FORMAT_STEREO8_22050 | AL_TYPE_ENV, 0},        // id_66 DRIP2.WAV
     {AL_FORMAT_STEREO8_22050 | AL_TYPE_ENV, 0},        // id_67 DRIP3.WAV
     {AL_FORMAT_STEREO8_22050 | AL_TYPE_ENV, 0},        // id_68 DRIP4.WAV
     {AL_FORMAT_STEREO8_22050 | AL_TYPE_ENV, 0} // id_69 DRIP5.WAV
     }
};

#endif
