#ifndef __IPINFO__VALUES__HPP__
    #define __IPINFO__VALUES__HPP__

    #include <map>
    #include <array>
    #include <string>
    #include <vector>
    #include <cstdint>

    namespace ipinfo
    {
        static const std::array<std::string, 2u> avail_hosts
        {
            "ip-api.com",
            "ipwhois.app"
        };

        enum AVAIL_HOSTS_IDS
        {
            IP_API_COM  = 0u,
            IPWHOIS_APP = 1u
        };

        static const std::map<std::string,
                              std::map<std::string,
                                       std::string>> avail_langs
        {
            {
                ipinfo::avail_hosts.at(ipinfo::AVAIL_HOSTS_IDS::IP_API_COM),
                {
                    {
                        {"english",       "en"},
                        {"german",        "de"},
                        {"spanish",       "es"},
                        {"portuguese",    "pt-BR"},
                        {"french",        "fr"},
                        {"japanese",      "ja"},
                        {"chinese",       "zh-CN"},
                        {"russian",       "ru"}
                    }
                }
            },

            {
                ipinfo::avail_hosts.at(ipinfo::AVAIL_HOSTS_IDS::IPWHOIS_APP),
                {
                    {
                        {"english",       "en"},
                        {"german",        "de"},
                        {"spanish",       "es"},
                        {"portuguese",    "pt-BR"},
                        {"french",        "fr"},
                        {"japanese",      "ja"},
                        {"chinese",       "zh-CN"},
                        {"russian",       "ru"}
                    }
                }
            }
        };

        static const std::map<std::string, std::string> req_start_paths
        {
            {
                ipinfo::avail_hosts.at(ipinfo::AVAIL_HOSTS_IDS::IP_API_COM),
                {
                    "http://" +
                    ipinfo::avail_hosts.at(ipinfo::AVAIL_HOSTS_IDS::IP_API_COM) +
                    "/json/"
                }
            },

            {
                ipinfo::avail_hosts.at(ipinfo::AVAIL_HOSTS_IDS::IPWHOIS_APP),
                {
                    "http://" +
                    ipinfo::avail_hosts.at(ipinfo::AVAIL_HOSTS_IDS::IPWHOIS_APP) +
                    "/json/"
                }
            }
        };

        static const std::map<std::string,
                              std::map<std::string,
                                       std::string>> req_param_titles
        {
            {
                ipinfo::avail_hosts.at(ipinfo::AVAIL_HOSTS_IDS::IP_API_COM),
                {
                    {"fields",  "fields"},  // ?fields=
                    {"lang",    "lang"},    // &lang=
                }
            }, \

            {
                ipinfo::avail_hosts.at(ipinfo::AVAIL_HOSTS_IDS::IPWHOIS_APP),
                {
                    {"fields",  "objects"},
                    {"lang",    "lang"}
                }
            }
        };

        static const std::map<std::string,
                              std::vector<std::string>> req_info_fields
        {
            {
                ipinfo::avail_hosts.at(ipinfo::AVAIL_HOSTS_IDS::IP_API_COM),
                {
                    {"query"},
                    {"continent"},
                    {"gcontinentCode"},
                    {"country"},
                    {"countryCode"},
                    {"region"},
                    {"regionName"},
                    {"city"},
                    {"district"},
                    {"zip"},
                    {"lat"},
                    {"lon"},
                    {"timezone"},
                    {"offset"},
                    {"currency"},
                    {"isp"},
                    {"org"},
                    {"as"},
                    {"asname"},
                    {"reverse"},
                    {"mobile"},
                    {"proxy"},
                    {"hosting"}
                }
            },

            {
                ipinfo::avail_hosts.at(ipinfo::AVAIL_HOSTS_IDS::IPWHOIS_APP),
                {
                    {"ip"},
                    {"type"},
                    {"continent"},
                    {"continent_code"},
                    {"country"},
                    {"country_code"},
                    {"country_capital"},
                    {"country_phone"},
                    {"country_neighbours"},
                    {"region"},
                    {"city"},
                    {"latitude"},
                    {"longitude"},
                    {"as"},
                    {"org"},
                    {"isp"},
                    {"timezone"},
                    {"timezone_name"},
                    {"timezone_dstOffset"},
                    {"timezone_gmtOffset"},
                    {"timezone_gmt"},
                    {"currency"},
                    {"currency_code"},
                    {"currency_symbol"},
                    {"currency_rates"},
                    {"currency_plural"}
                }
            }
        };
    }

#endif
