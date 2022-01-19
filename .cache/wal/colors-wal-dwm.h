static const char norm_fg[] = "#e0dcd0";
static const char norm_bg[] = "#0b0f18";
static const char norm_border[] = "#9c9a91";

static const char sel_fg[] = "#e0dcd0";
static const char sel_bg[] = "#966859";
static const char sel_border[] = "#e0dcd0";

static const char urg_fg[] = "#e0dcd0";
static const char urg_bg[] = "#A94F34";
static const char urg_border[] = "#A94F34";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
