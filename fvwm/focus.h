/* This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _FOCUS_
#define _FOCUS_

#define FOCUS_SET(w) XSetInputFocus(dpy, w, RevertToParent, CurrentTime);
#define FOCUS_RESET() \
  XSetInputFocus(dpy, PointerRoot, RevertToPointerRoot, CurrentTime);

/********************************************************************
 *
 * Sets the input focus to the indicated window.
 *
 **********************************************************************/
void SetFocus(Window, FvwmWindow *, Bool FocusByMouse);


/**************************************************************************
 *
 * Moves focus to specified window
 *
 *************************************************************************/
void FocusOn(FvwmWindow *t, Bool FocusByMouse, char *action);

/**
 * These need documentation
 **/
void flip_focus_func(F_CMD_ARGS);
void focus_func(F_CMD_ARGS);
void warp_func(F_CMD_ARGS);
Bool IsLastFocusSetByMouse(void);
Bool focus_grab_buttons(FvwmWindow *tmp_win, Bool is_focused);
Bool do_accept_input_focus(FvwmWindow *tmp_win);

#endif /* _FOCUS_ */
