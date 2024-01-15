public char * save(constant char *s);
public void out_of_memory(void);
public void * ecalloc(int count, unsigned int size);
public char * skipsp(char *s);
public int sprefix(char *ps, char *s, int uppercase);
public void quit(int status);
public void raw_mode(int on);
public void scrsize(void);
public char * special_key_str(int key);
public void get_term(void);
public void init_mouse(void);
public void deinit_mouse(void);
public void init(void);
public void deinit(void);
public int interactive(void);
public void home(void);
public void dump_screen(void);
public void add_line(void);
public void remove_top(int n);
public void win32_scroll_up(int n);
public void lower_left(void);
public void line_left(void);
public void check_winch(void);
public void goto_line(int sindex);
public void vbell(void);
public void bell(void);
public void clear(void);
public void clear_eol(void);
public void clear_bot(void);
public COLOR_TYPE parse_color(char *str, int *p_fg, int *p_bg);
public void at_enter(int attr);
public void at_exit(void);
public void at_switch(int attr);
public int is_at_equiv(int attr1, int attr2);
public int apply_at_specials(int attr);
public void putbs(void);
public int win32_kbhit(void);
public char WIN32getch(void);
public void WIN32ungetch(int ch);
public void WIN32setcolors(int fg, int bg);
public void WIN32textout(char *text, int len);
public void match_brac(char obrac, char cbrac, int forwdir, int n);
public void ch_ungetchar(int c);
public void end_logfile(void);
public void sync_logfile(void);
public int ch_seek(POSITION pos);
public int ch_end_seek(void);
public int ch_end_buffer_seek(void);
public int ch_beg_seek(void);
public POSITION ch_length(void);
public POSITION ch_tell(void);
public int ch_forw_get(void);
public int ch_back_get(void);
public void ch_setbufspace(int bufspace);
public void ch_flush(void);
public int seekable(int f);
public void ch_set_eof(void);
public void ch_init(int f, int flags);
public void ch_close(void);
public int ch_getflags(void);
public void setfmt(char *s, char **fmtvarptr, int *attrptr, char *default_fmt, int for_printf);
public void init_charset(void);
public int binary_char(LWCHAR c);
public int control_char(LWCHAR c);
public char * prchar(LWCHAR c);
public char * prutfchar(LWCHAR ch);
public int utf_len(int ch);
public int is_utf8_well_formed(char *ss, int slen);
public void utf_skip_to_lead(char **pp, char *limit);
public LWCHAR get_wchar(constant char *p);
public void put_wchar(char **pp, LWCHAR ch);
public LWCHAR step_char(char **pp, signed int dir, constant char *limit);
public int is_composing_char(LWCHAR ch);
public int is_ubin_char(LWCHAR ch);
public int is_wide_char(LWCHAR ch);
public int is_combining_char(LWCHAR ch1, LWCHAR ch2);
public void cmd_reset(void);
public void clear_cmd(void);
public void cmd_putstr(constant char *s);
public int len_cmdbuf(void);
public void cmd_repaint(constant char *old_cp);
public void set_mlist(void *mlist, int cmdflags);
public void cmd_addhist(struct mlist *mlist, constant char *cmd, int modified);
public void cmd_accept(void);
public int cmd_char(int c);
public LINENUM cmd_int(long *frac);
public char * get_cmdbuf(void);
public char * cmd_lastpattern(void);
public void init_cmdhist(void);
public void save_cmdhist(void);
public int in_mca(void);
public int norm_search_type(int st);
public void dispversion(void);
public int getcc(void);
public void ungetcc(LWCHAR c);
public void ungetcc_back(LWCHAR c);
public void ungetsc(char *s);
public LWCHAR peekcc(void);
public void commands(void);
public int cvt_length(int len, int ops);
public int * cvt_alloc_chpos(int len);
public void cvt_text(char *odst, char *osrc, int *chpos, int *lenp, int ops);
public void expand_cmd_tables(void);
public void init_cmds(void);
public void add_fcmd_table(char *buf, int len);
public void add_ecmd_table(char *buf, int len);
public int fcmd_decode(char *cmd, char **sp);
public int ecmd_decode(char *cmd, char **sp);
public char * lgetenv(char *var);
public int isnullenv(char *s);
public int lesskey(char *filename, int sysvar);
public int lesskey_src(char *filename, int sysvar);
public int add_hometable(int (*call_lesskey)(char *, int), char *envname, char *def_filename, int sysvar);
public int editchar(int c, int flags);
public void init_textlist(struct textlist *tlist, char *str);
public char * forw_textlist(struct textlist *tlist, char *prev);
public char * back_textlist(struct textlist *tlist, char *prev);
public void close_altpipe(IFILE ifile);
public void check_altpipe_error(void);
public int edit(char *filename);
public int edit_ifile(IFILE ifile);
public int edit_list(char *filelist);
public int edit_first(void);
public int edit_last(void);
public int edit_next(int n);
public int edit_prev(int n);
public int edit_index(int n);
public IFILE save_curr_ifile(void);
public void unsave_ifile(IFILE save_ifile);
public void reedit_ifile(IFILE save_ifile);
public void reopen_curr_ifile(void);
public int edit_stdin(void);
public void cat_file(void);
public void use_logfile(char *filename);
public char * shell_unquote(char *str);
public char * get_meta_escape(void);
public char * shell_quote(char *s);
public char * dirfile(char *dirname, char *filename, int must_exist);
public char * homefile(char *filename);
public char * fexpand(char *s);
public char * fcomplete(char *s);
public int bin_file(int f);
public char * lglob(char *filename);
public int is_fake_pathname(char *path);
public char * lrealpath(char *path);
public char * open_altfile(char *filename, int *pf, void **pfd);
public void close_altfile(char *altfilename, char *filename);
public int is_dir(char *filename);
public char * bad_file(char *filename);
public POSITION filesize(int f);
public int curr_ifile_changed(void);
public char * shell_coption(void);
public char * last_component(char *name);
public void eof_bell(void);
public int eof_displayed(void);
public int entire_file_displayed(void);
public void squish_check(void);
public int overlay_header(void);
public void forw(int n, POSITION pos, int force, int only_last, int nblank);
public void back(int n, POSITION pos, int force, int only_last);
public void forward(int n, int force, int only_last);
public void backward(int n, int force, int only_last);
public int get_back_scroll(void);
public int get_one_screen(void);
public void del_ifile(IFILE h);
public IFILE next_ifile(IFILE h);
public IFILE prev_ifile(IFILE h);
public IFILE getoff_ifile(IFILE ifile);
public int nifile(void);
public IFILE get_ifile(char *filename, IFILE prev);
public char * get_filename(IFILE ifile);
public char * get_real_filename(IFILE ifile);
public int get_index(IFILE ifile);
public void store_pos(IFILE ifile, struct scrpos *scrpos);
public void get_pos(IFILE ifile, struct scrpos *scrpos);
public void set_open(IFILE ifile);
public int opened(IFILE ifile);
public void hold_ifile(IFILE ifile, int incr);
public int held_ifile(IFILE ifile);
public void * get_filestate(IFILE ifile);
public void set_filestate(IFILE ifile, void *filestate);
public void set_altpipe(IFILE ifile, void *p);
public void *get_altpipe(IFILE ifile);
public void set_altfilename(IFILE ifile, char *altfilename);
public char * get_altfilename(IFILE ifile);
public void if_dump(void);
public POSITION forw_line_seg(POSITION curr_pos, int skipeol, int rscroll, int nochop);
public POSITION forw_line(POSITION curr_pos);
public POSITION back_line(POSITION curr_pos);
public void set_attnpos(POSITION pos);
public void jump_forw(void);
public void jump_forw_buffered(void);
public void jump_back(LINENUM linenum);
public void repaint(void);
public void jump_percent(int percent, long fraction);
public void jump_line_loc(POSITION pos, int sline);
public void jump_loc(POSITION pos, int sline);
public void init_line(void);
public int is_ascii_char(LWCHAR ch);
public POSITION line_position(void);
public void prewind(void);
public void plinestart(POSITION pos);
public int line_pfx_width(void);
public void pshift_all(void);
public int pwidth(LWCHAR ch, int a, LWCHAR prev_ch, int prev_a);
public void savec(void);
public void loadc(void);
public int is_ansi_end(LWCHAR ch);
public int is_ansi_middle(LWCHAR ch);
public void skip_ansi(struct ansi_state *pansi, char **pp, constant char *limit);
public struct ansi_state * ansi_start(LWCHAR ch);
public int ansi_step(struct ansi_state *pansi, LWCHAR ch);
public void ansi_done(struct ansi_state *pansi);
public int pappend(int c, POSITION pos);
public int pflushmbc(void);
public void pdone(int endline, int chopped, int forw);
public void set_attr_line(int a);
public void set_status_col(char c, int attr);
public int gline(int i, int *ap);
public void null_line(void);
public POSITION forw_raw_line(POSITION curr_pos, char **linep, int *line_lenp);
public POSITION back_raw_line(POSITION curr_pos, char **linep, int *line_lenp);
public int skip_columns(int cols, char **linep, int *line_lenp);
public void load_line(constant char *str);
public int rrshift(void);
public int set_color_map(int attr, char *colorstr);
public char * get_color_map(int attr);
public void clr_linenum(void);
public void add_lnum(LINENUM linenum, POSITION pos);
public LINENUM find_linenum(POSITION pos);
public POSITION find_pos(LINENUM linenum);
public LINENUM currline(int where);
public void scan_eof(void);
public LINENUM vlinenum(LINENUM linenum);
public void lsystem(char *cmd, char *donemsg);
public int pipe_mark(int c, char *cmd);
public int pipe_data(char *cmd, POSITION spos, POSITION epos);
public void init_mark(void);
public int badmark(LWCHAR c);
public void setmark(LWCHAR c, int where);
public void clrmark(LWCHAR c);
public void lastmark(void);
public void gomark(LWCHAR c);
public POSITION markpos(LWCHAR c);
public char posmark(POSITION pos);
public void unmark(IFILE ifile);
public void mark_check_ifile(IFILE ifile);
public void save_marks(FILE *fout, char *hdr);
public void restore_mark(char *line);
public void opt_o(int type, char *s);
public void opt__O(int type, char *s);
public void opt_j(int type, char *s);
public void calc_jump_sline(void);
public void opt_shift(int type, char *s);
public void calc_shift_count(void);
public void opt_k(int type, char *s);
public void opt_ks(int type, char *s);
public void opt_t(int type, char *s);
public void opt__T(int type, char *s);
public void opt_p(int type, char *s);
public void opt__P(int type, char *s);
public void opt_b(int type, char *s);
public void opt_i(int type, char *s);
public void opt__V(int type, char *s);
public void opt_D(int type, char *s);
public void set_tabs(char *s, int len);
public void opt_x(int type, char *s);
public void opt_quote(int type, char *s);
public void opt_rscroll(int type, char *s);
public void opt_query(int type, char *s);
public void opt_mousecap(int type, char *s);
public void opt_wheel_lines(int type, char *s);
public void opt_linenum_width(int type, char *s);
public void opt_status_col_width(int type, char *s);
public void opt_filesize(int type, char *s);
public void opt_intr(int type, char *s);
public void opt_header(int type, char *s);
public void opt_search_type(int type, char *s);
public void opt_ttyin_name(int type, char *s);
public int chop_line(void);
public int get_swindow(void);
public char * propt(int c);
public void scan_option(char *s);
public void toggle_option(struct loption *o, int lower, char *s, int how_toggle);
public int opt_has_param(struct loption *o);
public char * opt_prompt(struct loption *o);
public char * opt_toggle_disallowed(int c);
public int isoptpending(void);
public void nopendopt(void);
public int getnum(char **sp, char *printopt, int *errp);
public long getfraction(char **sp, char *printopt, int *errp);
public int get_quit_at_eof(void);
public void init_option(void);
public struct loption * findopt(int c);
public struct loption * findopt_name(char **p_optname, char **p_oname, int *p_err);
public void init_poll(void);
public int supports_ctrl_x(void);
public int iread(int fd, unsigned char *buf, unsigned int len);
public void intread(void);
public time_type get_time(void);
public char * errno_message(char *filename);
public char * signal_message(int sig);
public uintmax muldiv(uintmax val, uintmax num, uintmax den);
public int percentage(POSITION num, POSITION den);
public POSITION percent_pos(POSITION pos, int percent, long fraction);
public int os9_signal(int type, RETSIGTYPE (*handler)());
public void sleep_ms(int ms);
public void put_line(void);
public void flush(void);
public void set_output(int fd);
public int putchr(int c);
public void clear_bot_if_needed(void);
public void putstr(constant char *s);
public int less_printf(char *fmt, PARG *parg);
public void get_return(void);
public void error(char *fmt, PARG *parg);
public void ierror(char *fmt, PARG *parg);
public void ixerror(char *fmt, PARG *parg);
public int query(char *fmt, PARG *parg);
public int compile_pattern(char *pattern, int search_type, int show_error, PATTERN_TYPE *comp_pattern);
public void uncompile_pattern(PATTERN_TYPE *pattern);
public int valid_pattern(char *pattern);
public int is_null_pattern(PATTERN_TYPE pattern);
public int match_pattern(PATTERN_TYPE pattern, char *tpattern, char *line, int line_len, char **sp, char **ep, int nsp, int notbol, int search_type);
public char * pattern_lib_name(void);
public POSITION position(int sindex);
public void add_forw_pos(POSITION pos);
public void add_back_pos(POSITION pos);
public void pos_clear(void);
public void pos_init(void);
public int onscreen(POSITION pos);
public int empty_screen(void);
public int empty_lines(int s, int e);
public void get_scrpos(struct scrpos *scrpos, int where);
public int sindex_from_sline(int sline);
public void init_prompt(void);
public char * pr_expand(constant char *proto);
public char * eq_message(void);
public char * pr_string(void);
public char * wait_message(void);
public void init_search(void);
public void repaint_hilite(int on);
public void clear_attn(void);
public void undo_search(int clear);
public void clr_hlist(struct hilite_tree *anchor);
public void clr_hilite(void);
public void clr_filter(void);
public int is_filtered(POSITION pos);
public POSITION next_unfiltered(POSITION pos);
public POSITION prev_unfiltered(POSITION pos);
public int is_hilited_attr(POSITION pos, POSITION epos, int nohide, int *p_matches);
public void chg_hilite(void);
public void chg_caseless(void);
public int search(int search_type, char *pattern, int n);
public void prep_hilite(POSITION spos, POSITION epos, int maxlines);
public void set_filter_pattern(char *pattern, int search_type);
public int is_filtering(void);
public RETSIGTYPE winch(int type);
public void init_signals(int on);
public void psignals(void);
public void cleantags(void);
public int gettagtype(void);
public void findtag(char *tag);
public POSITION tagsearch(void);
public char * nexttag(int n);
public char * prevtag(int n);
public int ntags(void);
public int curr_tag(void);
public int edit_tagfile(void);
public int open_tty(void);
public void open_getchr(void);
public void close_getchr(void);
public int pclose(FILE *f);
public int default_wheel_lines(void);
public int getchr(void);
public void xbuf_init(struct xbuffer *xbuf);
public void xbuf_deinit(struct xbuffer *xbuf);
public void xbuf_reset(struct xbuffer *xbuf);
public void xbuf_add_byte(struct xbuffer *xbuf, unsigned char b);
public void xbuf_add_data(struct xbuffer *xbuf, unsigned char *data, int len);
public int xbuf_pop(struct xbuffer *buf);
public void xbuf_set(struct xbuffer *dst, struct xbuffer *src);
public char * xbuf_char_data(struct xbuffer *xbuf);
public int help_ckd_add(void *r, uintmax a, uintmax b, int rsize, int rsigned);
public int help_ckd_mul(void *r, uintmax a, uintmax b, int rsize, int rsigned);
