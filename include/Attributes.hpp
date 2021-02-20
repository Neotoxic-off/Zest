#ifndef _ATTRIBUTES_HPP_
    #define _ATTRIBUTES_HPP_

    #define EMPTY "_EMPTY_"

    #include <iostream>
    #include <string>

    namespace Attributes
    {
        class a
        {
            public:
                a();
                ~a();

                std::string get_attributes();

                // id
                bool id(std::string);
                std::string id();

                // download
                bool download(std::string);
                std::string download();

                // href
                bool href(std::string);
                std::string href();

                // hreflang
                bool hreflang(std::string);
                std::string hreflang();

                // media
                bool media(std::string);
                std::string media();

                // ping
                bool ping(std::string);
                std::string ping();

                // referrerpolicy
                bool referrerpolicy(std::string);
                std::string referrerpolicy();

                // rel
                bool rel(std::string);
                std::string rel();

                // target
                bool target(std::string);
                std::string target();

                // type
                bool type(std::string);
                std::string type();

            private:
                std::string id_t;
                std::string download_t;
                std::string href_t;
                std::string hreflang_t;
                std::string media_t;
                std::string ping_t;
                std::string referrerpolicy_t;
                std::string rel_t;
                std::string target_t;
                std::string type_t;

                std::string get_template(std::string, std::string);
        };
    
        class img
        {
            public:
                img();
                ~img();
            
                std::string get_attributes();

                // id
                bool id(std::string);
                std::string id();

                // alt
                bool alt(std::string);
                std::string alt();

                // src
                bool src(std::string);
                std::string src();

                // crossorigin
                bool crossorigin(std::string);
                std::string crossorigin();

                // height
                bool height(std::string);
                std::string height();

                // width
                bool width(std::string);
                std::string width();

                // jsmap
                bool jsmap(std::string);
                std::string jsmap();

                // ismap
                bool ismap(std::string);
                std::string ismap();

                // loading
                bool loading(std::string);
                std::string loading();

                // longdesc
                bool longdesc(std::string);
                std::string longdesc();

                // referrerpolicy
                bool referrerpolicy(std::string);
                std::string referrerpolicy();

                // sizes
                bool sizes(std::string);
                std::string sizes();

                // srcset
                bool srcset(std::string);
                std::string srcset();

                // usermap
                bool usermap(std::string);
                std::string usermap();

                // style
                bool style(std::string);
                std::string style();

            private:
                std::string id_t;
                std::string alt_t;
                std::string src_t;
                std::string crossorigin_t;
                std::string height_t;
                std::string width_t;
                std::string jsmap_t;
                std::string ismap_t;
                std::string loading_t;
                std::string longdesc_t;
                std::string referrerpolicy_t;
                std::string sizes_t;
                std::string srcset_t;
                std::string usermap_t;
                std::string style_t;

                std::string get_template(std::string, std::string);
        };
    };

#endif /* _ATTRIBUTES_HPP_ */