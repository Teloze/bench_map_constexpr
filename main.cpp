#include<array>
#include<utility>
#include<algorithm>
#include<stdexcept>
#include<map>
#include<unordered_map>
#include<cstdlib>

/**
 * \brief constexpr version of map taken from <a href="https://youtu.be/INn3xa4pMfg?si=uFVuguG6y7VP9xZC">here</a>
 */
template<typename KEY, typename VALUE, std::size_t N>
class Map {
public:
    std::array<std::pair<KEY, VALUE>, N> data_;
    [[nodiscard]] constexpr VALUE const& at(KEY const& key) const {
        auto it = std::find_if(
            data_.begin(), data_.end(),
            [&key](auto const& v) { return v.first == key; }
        );
        if (it != data_.end()) {
            return it->second;
        }
        else {
            throw std::range_error("Not found");
        }
    }
};

/**
 * \brief container for converting USD to currency
 */
struct optiondata {
    /**
     * \brief conversion factor from USD to the currency
     */
    double conversion;
    /**
     * \brief the user-readable label for the currency
     */
    char const * label;
};

/**
 * \brief list of options (start from 3 because room is made for other program options)
 * Any other currency may be added by extending this enum
 * \note this is not extensible code -> adding an option to the program requires changing the numbering
 */
enum option {
    eur    = 3,
    jap    = 4,
    pounds = 5,
    titi   = 6,
    toto   = 7,
    tata   = 8,
    tete   = 9,
    tutu   = 10,
    t1,
    t2,
    t3,
    t4,
    t5,
    t6,
    t7,
    t8,
    t9,
    t10,
    t11,
    t12,
    t13,
    t14,
    t15,
    t16,
    t17,
    t18,
    t19,
    t20,
    t21,
    t22,
    t23,
    t24,
    t25,
    t26,
    t27,
    t28,
    t29,
    t30
};

/**
 * \brief just the raw data to put in constant memory of binary
 * For each enum option, define the conversion factor and the label
 * \note aggregate initialization (<a href="https://en.cppreference.com/w/cpp/language/aggregate_initialization">doc</a> )
 *       is used to init the Map
 */
static constexpr std::array<std::pair<option, optiondata>, 38> option_values{
    {
        {eur,   {1. / 0.92  ,"eur"   }},
        {jap,   {1. / 0.0069,"jap"   }},
        {pounds,{1. / 0.79  ,"pounds"}},
        {titi,  {1. / 0.79  ,"titi"  }},
        {toto,  {1. / 0.79  ,"toto"  }},
        {tata,  {1. / 0.79  ,"tata"  }},
        {tete,  {1. / 0.79  ,"tete"  }},
        {tutu,  {1. / 0.79  ,"tutu"  }},
        {t1,    {1.  ,"t1"    }},
        {t2,    {2.  ,"t2"    }},
        {t3,    {3.  ,"t3"    }},
        {t4,    {4.  ,"t4"    }},
        {t5,    {5.  ,"t5"    }},
        {t6,    {6.  ,"t6"    }},
        {t7,    {7.  ,"t7"    }},
        {t8,    {8.  ,"t8"    }},
        {t9,    {9.  ,"t9"    }},
        {t10,    {10.  ,"t10"    }},
        {t11,    {11. / 0.79  ,"t11"    }},
        {t12,    {12. / 0.79  ,"t12"    }},
        {t13,    {13. / 0.79  ,"t13"    }},
        {t14,    {14. / 0.79  ,"t14"    }},
        {t15,    {15. / 0.79  ,"t15"    }},
        {t16,    {16. / 0.79  ,"t16"    }},
        {t17,    {17. / 0.79  ,"t17"    }},
        {t18,    {18. / 0.79  ,"t18"    }},
        {t19,    {19. / 0.79  ,"t19"    }},
        {t20,    {20. / 0.79  ,"t20"    }},
        {t21,    {654. / 0.79  ,"t21"    }},
        {t22,    {54. / 0.79  ,"t22"    }},
        {t23,    {58. / 0.79  ,"t23"    }},
        {t24,    {45. / 0.79  ,"t24"    }},
        {t25,    {5641. / 0.79  ,"t25"    }},
        {t26,    {1684. / 0.79  ,"t26"    }},
        {t27,    {145. / 0.79  ,"t27"    }},
        {t28,    {145. / 0.79  ,"t28"    }},
        {t29,    {154. / 0.79  ,"t29"    }},
        {t30,    {8419. / 0.79  ,"t30"    }}
    }
};


optiondata const & ifenum(option const & opt) {
  switch(opt){
  case(eur) :
    return option_values[0].second; break;
  case(jap) :
    return option_values[1].second; break;
  case(pounds) :
    return option_values[2].second; break;
  case(titi) :
    return option_values[3].second; break;
  case(toto) :
    return option_values[4].second; break;
  case(tata) :
    return option_values[5].second; break;
  case(tete) :
    return option_values[6].second; break;
  case(tutu) :
    return option_values[7].second; break;
  case(t1) :
    return option_values[8].second; break;
  case(t2) :
    return option_values[9].second; break;
  case(t3) :
    return option_values[10].second; break;
  case(t4) :
    return option_values[11].second; break;
  case(t5) :
    return option_values[12].second; break;
  case(t6) :
    return option_values[13].second; break;
  case(t7) :
    return option_values[14].second; break;
  case(t8) :
    return option_values[15].second; break;
  case(t9) :
    return option_values[16].second; break;
  case(t10) :
    return option_values[17].second; break;
  case(t11) :
    return option_values[18].second; break;
  case(t12) :
    return option_values[19].second; break;
  case(t13) :
    return option_values[20].second; break;
  case(t14) :
    return option_values[21].second; break;
  case(t15) :
    return option_values[22].second; break;
  case(t16) :
    return option_values[23].second; break;
  case(t17) :
    return option_values[24].second; break;
  case(t18) :
    return option_values[25].second; break;
  case(t19) :
    return option_values[26].second; break;
  case(t20) :
    return option_values[27].second; break;
  case(t21) :
    return option_values[28].second; break;
  case(t22) :
    return option_values[29].second; break;
  case(t23) :
    return option_values[30].second; break;
  case(t24) :
    return option_values[31].second; break;
  case(t25) :
    return option_values[32].second; break;
  case(t26) :
    return option_values[33].second; break;
  case(t27) :
    return option_values[34].second; break;
  case(t28) :
    return option_values[35].second; break;
  case(t29) :
    return option_values[36].second; break;
  case(t30) :
    return option_values[37].second; break;
  }
}


option generateInput() {
    return static_cast<option>(rand() % option_values.size() + 3);
}

static void constexprmap(benchmark::State& state) {
  static constexpr auto map =
        Map<option, optiondata, option_values.size()>{ {option_values} };
     
  for (auto _ : state) {
    option user_opt = generateInput();
    auto const & data = map.at(user_opt);
    // Make sure the variable is not optimized away by compiler
    benchmark::DoNotOptimize(data);
  }
}
BENCHMARK(constexprmap);


static void stdmap(benchmark::State& state) {
  static auto const map = std::map<option, optiondata>{option_values.begin(),option_values.end()};
     
  for (auto _ : state) {
    option user_opt = generateInput();
    auto const & data = map.at(user_opt);
    // Make sure the variable is not optimized away by compiler
    benchmark::DoNotOptimize(data);
  }
}
BENCHMARK(stdmap);


static void stdumap(benchmark::State& state) {
  static auto const map = std::unordered_map<option, optiondata>{option_values.begin(),option_values.end()};
     
  for (auto _ : state) {
    option user_opt = generateInput();
    auto const & data = map.at(user_opt);
    // Make sure the variable is not optimized away by compiler
    benchmark::DoNotOptimize(data);
  }
}
BENCHMARK(stdumap);


static void bifenum(benchmark::State& state) {     
  for (auto _ : state) {
    option user_opt = generateInput();
    auto const & data = ifenum(user_opt);
    // Make sure the variable is not optimized away by compiler
    benchmark::DoNotOptimize(data);
  }
}
BENCHMARK(bifenum);