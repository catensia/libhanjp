#ifndef __HANJP_UNICODE_H__
#define __HANJP_UNICODE_H__

//The belows are Unicode presets for Hangul

enum {
    //initial consonants
    HANJP_CHOSEONG_KIYEOK = 0x1100,
    HANJP_CHOSEONG_SSANGKIYEOK,
    HANJP_CHOSEONG_NIEUN,
    HANJP_CHOSEONG_TIKEUT,
    HANJP_CHOSEONG_SSANGTIKEUT,
    HANJP_CHOSEONG_RIEUL,
    HANJP_CHOSEONG_MIEUM,
    HANJP_CHOSEONG_PIEUP,
    HANJP_CHOSEONG_SSANGPIEUP,
    HANJP_CHOSEONG_SIOS,
    HANJP_CHOSEONG_SSANGSIOS,
    HANJP_CHOSEONG_IEUNG,
    HANJP_CHOSEONG_CIEUC,
    HANJP_CHOSEONG_SSANGCIEUC,
    HANJP_CHOSEONG_CHIEUCH,
    HANJP_CHOSEONG_KHIEUKH,
    HANJP_CHOSEONG_THIEUTH,
    HANJP_CHOSEONG_PHIEUPH,
    HANJP_CHOSEONG_HIEUH,
    //old initial consonants
    HANJP_CHOSEONG_NIEUN_KIYEOK
    HANJP_CHOSEONG_SSANGNIEUN,
    HANJP_CHOSEONG_NIEUN_TIKEUT,
    HANJP_CHOSEONG_NIEUN_PIEUP,
    HANJP_CHOSEONG_TIKEUT_KIYEOK,
    HANJP_CHOSEONG_RIEUL_NIEUN,
    HANJP_CHOSEONG_SSANGRIEUL,
    HANJP_CHOSEONG_RIEUL_HIEUH,
    HANJP_CHOSEONG_KAPYEOUNRIEUL,
    HANJP_CHOSEONG_MIEUN_PIEUP,
    HANJP_CHOSEONG_KAPYEOUNMIEUM,
    HANJP_CHOSEONG_PIEUP_KIYEOK,
    HANJP_CHOSEONG_PIEUP_NIEUN,
    HANJP_CHOSEONG_PIEUP_TIKEUT,
    HANJP_CHOSEONG_PIEUP_SIOS,
    HANJP_CHOSEONG_PIEUP_SIOS_KIYEOK,
    HANJP_CHOSEONG_PIEUP_SIOS_TIKEUT,
    HANJP_CHOSEONG_PIEUP_SIOS_PIEUP,
    HANJP_CHOSEONG_PIEUP_SSANGSIOS,
    HANJP_CHOSEONG_PIEUP_SIOS_CIEUC,
    HANJP_CHOSEONG_PIEUP_CIEUC,
    HANJP_CHOSEONG_PIEUP_CHIEUCH,
    HANJP_CHOSEONG_PIEUP_THIEUTH,
    HANJP_CHOSEONG_PIEUP_PHIEUPH,
    HANJP_CHOSEONG_KAPYOUNPIEUP,
    HANJP_CHOSEONG_KAPYOUNSSANGPIEUP,
    HANJP_CHOSEONG_SIOS_KIYEOK,
    HANJP_CHOSEONG_SIOS_NIEUN,
    HANJP_CHOSEONG_SIOS_TIKEUT,
    HANJP_CHOSEONG_SIOS_RIEUL,
    HANJP_CHOSEONG_SIOS_MIEUM,
    HANJP_CHOSEONG_SIOS_PIEUP,
    HANJP_CHOSEONG_SIOS_PIEUP_KIYEOK,
    HANJP_CHOSEONG_SIOS_SSANGSSIOS,
    HANJP_CHOSEONG_SIOS_IEUNG,
    HANJP_CHOSEONG_SIOS_CIEUC,
    HANJP_CHOSEONG_SIOS_CHIEUCH,
    HANJP_CHOSEONG_SIOS_KHIEUKH,
    HANJP_CHOSEONG_SIOS_THIEUTH,
    HANJP_CHOSEONG_SIOS_PHIEUPH,
    HANJP_CHOSEONG_SIOS_HIEUH,
    HANJP_CHOSEONG_CHITUEUMSIOS,
    HANJP_CHOSEONG_CHITUEUMSSANGSIOS,
    HANJP_CHOSEONG_CEONGCHIEUMSIOS,
    HANJP_CHOSEONG_CEONGCHIEUMSSANGSIOS,
    HANJP_CHOSEONG_PANSIOS,
    HANJP_CHOSEONG_IEUNG_KIYEOK,
    HANJP_CHOSEONG_IEUNG_TIKEUT,
    HANJP_CHOSEONG_IEUNG_MIEUM,
    HANJP_CHOSEONG_IEUNG_PIEUP,
    HANJP_CHOSEONG_IEUNG_SIOS,
    HANJP_CHOSEONG_IUENG_PANSIOS,
    HANJP_CHOSEONG_IUENG_SSANGIEUNG,
    HANJP_CHOSEONG_IEUNG_CIEUC,
    HANJP_CHOSEONG_IEUNG_CHIEUCH,
    HANJP_CHOSEONG_IEUNG_THIEUCH,
    HANJP_CHOSEONG_IEUNG_PHIEUPH,    
    HANJP_CHOSEONG_YESIEUNG,
    HANJP_CHOSEONG_CIEUC_IEUNG,
    HANJP_CHOSEONG_CHITUEUMCIUEC,
    HANJP_CHOSEONG_CHITUEUMSSANGCIEUC,
    HANJP_CHOSEONG_CEONGCHIEUMCIEUC,
    HANJP_CHOSEONG_CEONGCHIEUMSSANGCIEUC,
    HANJP_CHOSEONG_CHIEUCH_KHIEUKH,
    HANJP_CHOSEONG_CHIEUCH_HIEUH,
    HANJP_CHOSEONG_CHITUEUMCHIEUCH,
    HANJP_CHOSEONG_CEONGCHIEUMCHIEUCH,
    HANJP_CHOSEONG_PHIEUPH_PIEUP,
    HANJP_CHOSEONG_KAPYEOUNPHIEUPH,
    HANJP_CHOSEONG_SSANGHIEUH,
    HANJP_CHOSEONG_YEORINHIEUH,
    HANJP_CHOSEONG_KIYEOK_TIKEUT,
    HANJP_CHOSEONG_NIEUN_SIOS,
    HANJP_CHOSEONG_NIEUN_CIEUC,
    HANJP_CHOSEONG_NIEUN_HIEUH,
    HANJP_CHOSEONG_NIEUN_RIEUL,
    HANJP_CHOSEONG_FILLER
};

enum {
    //Medial vowels
    HANJP_JUNGSEONG_FILLER = 0x1160,
    HANJP_JUNGSEONG_A,
    HANJP_JUNGSEONG_AE,
    HANJP_JUNGSEONG_YA,
    HANJP_JUNGSEONG_YAE,
    HANJP_JUNGSEONG_EO,
    HANJP_JUNGSEONG_E,
    HANJP_JUNGSEONG_YEO,
    HANJP_JUNGSEONG_YE,
    HANJP_JUNGSEONG_O,
    HANJP_JUNGSEONG_WA, // ㅘ
    HANJP_JUNGSEONG_WAE,
    HANJP_JUNGSEONG_OE,
    HANJP_JUNGSEONG_YO,
    HANJP_JUNGSEONG_U,
    HANJP_JUNGSEONG_WEO, // ㅝ
    HANJP_JUNGSEONG_WE, // ㅞ
    HANJP_JUNGSEONG_WI, // ㅟ
    HANJP_JUNGSEONG_YU,
    HANJP_JUNGSEONG_EU
    HANJP_JUNGSEONG_YI, // ㅢ
    HANJP_JUNGSEONG_I,
    //Old medial vowels
    HANJP_JUNGSEONG_A_O,
    HANJP_JUNGSEONG_A_U,
    HANJP_JUNGSEONG_YA_O,
    HANJP_JUNGSEONG_YA_YO,
    HANJP_JUNGSEONG_EO_O,
    HANJP_JUNGSEONG_EO_U,
    HANJP_JUNGSEONG_EO_EU,
    HANJP_JUNGSEONG_YEO_O,
    HANJP_JUNGSEONG_YEO_U,
    HANJP_JUNGSEONG_O_EO,
    HANJP_JUNGSEONG_O_E,
    HANJP_JUNGSEONG_O_YE,
    HANJP_JUNGSEONG_O_O,
    HANJP_JUNGSEONG_O_U,
    HANJP_JUNGSEONG_YO_YA,
    HANJP_JUNGSEONG_YO_YAE,
    HANJP_JUNGSEONG_YO_YEO,
    HANJP_JUNGSEONG_YO_O,
    HANJP_JUNGSEONG_YO_I,
    HANJP_JUNGSEONG_U_A,
    HANJP_JUNGSEONG_U_AE,
    HANJP_JUNGSEONG_U_EO_EU,
    HANJP_JUNGSEONG_U_YE,
    HANJP_JUNGSEONG_U_U,
    HANJP_JUNGSEONG_YU_A,
    HANJP_JUNGSEONG_YU_EO,
    HANJP_JUNGSEONG_YU_E,
    HANJP_JUNGSEONG_YU_YEO,
    HANJP_JUNGSEONG_YU_YE,
    HANJP_JUNGSEONG_YU_U,
    HANJP_JUNGSEONG_YU_I,
    HANJP_JUNGSEONG_EU_U,
    HANJP_JUNGSEONG_EU_EU,
    HANJP_JUNGSEONG_YI_U,
    HANJP_JUNGSEONG_I_A,
    HANJP_JUNGSEONG_I_YA,
    HANJP_JUNGSEONG_I_O,
    HANJP_JUNGSEONG_I_U,
    HANJP_JUNGSEONG_I_EU,
    HANJP_JUNGSEONG_I_ARAEA,
    HANJP_JUNGSEONG_ARAEA,
    HANJP_JUNGSEONG_ARAEA_EO,
    HANJP_JUNGSEONG_ARAEA_U,
    HANJP_JUNGSEONG_ARAEA_I,
    HANJP_JUNGSEONG_SSANGARAEA,
    HANJP_JUNGSEONG_A_EU,
    HANJP_JUNGSEONG_YA_U,
    HANJP_JUNGSEONG_YEO_YA,
    HANJP_JUNGSEONG_O_YA,
    HANJP_JUNGSEONG_O_YAE
};

enum {
    //Final consonants
    HANJP_JONGSEONG_KIYEOK = 0x11A8,       // ㄱ
    HANJP_JONGSEONG_SSANGKIYEOK,  // ㄲ
    HANJP_JONGSEONG_KIYEOK_SIOS,
    HANJP_JONGSEONG_NIEUN,        // ㄴ
    HANJP_JONGSEONG_NIEUN_CIEUC,
    HANJP_JONGSEONG_NIEUN_HIEUH,
    HANJP_JONGSEONG_TIKEUT,       // ㄷ
    HANJP_JONGSEONG_RIEUL,        // ㄹ
    HANJP_JONGSEONG_RIEUL_KIYEOK,
    HANJP_JONGSEONG_RIEUL_MIEUM,
    HANJP_JONGSEONG_RIEUL_PIEUP,
    HANJP_JONGSEONG_RIEUL_SIOS,
    HANJP_JONGSEONG_RIEUL_THIEUTH,
    HANJP_JONGSEONG_RIEUL_PHIEUPH,
    HANJP_JONGSEONG_RIEUL_HIEUH,
    HANJP_JONGSEONG_MIEUM,        // ㅁ
    HANJP_JONGSEONG_PIEUP,        // ㅂ
    HANJP_JONGSEONG_PIEUP_SIOS,
    HANJP_JONGSEONG_SIOS,         // ㅅ
    HANJP_JONGSEONG_SSANGSIOS,    // ㅆ
    HANJP_JONGSEONG_IEUNG,        // ㅇ
    HANJP_JONGSEONG_CIEUC,        // ㅈ
    HANJP_JONGSEONG_CHIEUCH,      // ㅊ 
    HANJP_JONGSEONG_KHIEUKH,      // ㅋ
    HANJP_JONGSEONG_THIEUTH,      // ㅌ
    HANJP_JONGSEONG_PHIEUPH,      // ㅍ
    HANJP_JONGSEONG_HIEUH,        // ㅎ
    //Old final consonants
    HANJP_JONGSEONG_KIYEOK_RIEUL,
    HANJP_JONGSEONG_KIYEOK_SIOS_KIYEOK,
    HANJP_JONGSEONG_KIYEOK_NIUEN_KIYEOK,
    HANJP_JONGSEONG_NIEUN_TIKEUT,
    HANJP_JONGSEON_NIEUN_SIOS,
    HANJP_JONGSEONG_NIEUN_PANSIOS,
    HANJP_JONGSEONG_NIEUN_THIEUTH,
    HANJP_JONGSEONG_TIKEUT_KIYEOK,
    HANJP_JONGSEONG_TIKEUT_RIEUL,
    HANJP_JONGSEONG_RIEUL_KIYEOK_SIOS,
    HANJP_JONGSEONG_RIEUL_NIEUN,
    HANJP_JONGSEONG_RIEUL_TIKEUT,
    HANJP_JONGSEONG_RIEUL_TIKEUT_HIEUH,
    HANJP_JONGSEONG_SSANGRIEUL,
    HANJP_JONGSEONG_RIEUL_MIEUM_KIYEOK,
    HANJP_JONGSEONG_RIEUL_MIEUM_SIOS,
    HANJP_JONGSEONG_RIEUL_PIEUP_SIOS,
    HANJP_JONGSEONG_RIEUL_PIEUP_HIEUH,
    HANJP_JONGSEONG_RIEUL_KAPYOUNPIEUP,
    HANJP_JONGSEONG_RIEUL_SSANGSIOS,
    HANJP_JONGSEONG_RIEUL_PANSIOS,
    HANJP_JONGSEONG_RIEUL_KHIEUKH,
    HANJP_JONGSEONG_RIEUL_YEORINHIEUH,
    HANJP_JONGSEONG_MIEUM_KIYEOK,
    HANJP_JONGSEONG_MIEUM_RIEUL,
    HANJP_JONGSEONG_MIEUM_PIEUP,
    HANJP_JONGSEONG_MIEUM_SIOS,
    HANJP_JONGSEONG_MIEUM_SSANGSIOS,
    HANJP_JONGSEONG_MIEUM_PANSIOS,
    HANJP_JONGSEONG_MIEUM_CHIEUCH,
    HANJP_JONGSEONG_MIEUM_HIEUH,
    HANJP_JONGSEONG_KAPYEOUNMIEUM,
    HANJP_JONGSEONG_PIEUP_RIEUL,
    HANJP_JONGSEONG_PIEUP_PHIEUPH,
    HANJP_JONGSEONG_PIEUP_HIEUH,
    HANJP_JONGSEONG_KAPYEOUNPIEUP,
    HANJP_JONGSEONG_SIOS_KIYEOK,
    HANJP_JONGSEONG_SIOS_TIKEUT,
    HANJP_JONGSEONG_SIOS_RIEUL,
    HANJP_JONGSEONG_SIOS_PIEUP,
    HANJP_JONGSEONG_PANSIOS,
    HANJP_JONGSEONG_IEUNG_KIYEOK,
    HANJP_JONGSEONG_IEUNG_SSANGKIYEOK,
    HANJP_JONGSEONG_SSANGIEUNG,
    HANJP_JONGSEONG_IEUNG_KHIEUKH,
    HANJP_JONGSEONG_YESIEUNG,
    HANJP_JONGSEONG_YESIEUNG_SIOS,
    HANJP_JONGSEOUG_YESIEUNG_PANSIOS,
    HANJP_JONGSEONG_PHIEUPH_PIEUP,
    HANJP_JONGSEONG_KAPYEOUNPHIEUPH,
    HANJP_JONGSEONG_HIEUH_NIEUN,
    HANJP_JONGSEONG_HIEUH_RIEUL,
    HANJP_JONGSEONG_HIEUH_MIEUM,
    HANJP_JONGSEONG_HIEUH_PIEUP,
    HANJP_JONGSEONG_YEORINHIEUH,
    HANJP_JONGSEONG_KIYEOK_NIEUN,
    HANJP_JONGSEONG_KIYEOK_PIEUP,
    HANJP_JONGSEONG_KIYEOK_CHIEUCH,
    HANJP_JONGSEONG_KIYEOK_KHIEUKH,
    HANJP_JONGSEONG_KIYEOK_HIEUH,
    HANJP_JONGSEONG_SSANGNIEUN
};

#endif // __HANJP_UNICODE_H__
