void    ev_loop(void)
{
        signed short    bool_continue = 1;
        SDL_Event ev;

        while (bool_continue)
        {
            SDL_WaitEvent(&ev);
            switch(ev.type)
            {
                case SDL_QUIT:
                bool_continue = 0;
            }
        }
}
