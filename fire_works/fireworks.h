#pragma once



class Fractions {
    sf::Color fractions_color;
    sf::Vector2f fractions_position;
    float fractions_alpha;
public:
    Fractions(sf::Vector2f, sf::Color);
    sf::Color get_color()          const { return fractions_color; };
    sf::Vector2f get_position()    const { return fractions_position;  };
    bool generate_fractions();
};

class Flow_fractions {
    int tact;
    sf::Color flow_fractions_color;
    sf::Vector2f flow_fractions_velocity;
    sf::Vector2f flow_fractions_positions;   
    std::list<Fractions*>*list_fractions;
public:
    Flow_fractions(std::list<Fractions*>*,sf::RenderWindow&);
    Flow_fractions(std::list<Fractions*>*);
    sf::Color get_color()       const { return flow_fractions_color; };
    sf::Vector2f get_position() const { return flow_fractions_positions; };
    bool generate_flow();
};

class Explosion {
    int tact;
    float explosion_alpha;
    sf::Color explosion_color;
    sf::Vector2f explosion_position;
    sf::Vector2f explosion_velocity;
public:
    Explosion(sf::Vector2f, sf::Color,int);
    sf::Color get_color()       const { return explosion_color;     };
    sf::Vector2f get_position() const { return explosion_position;  };
    bool generate_explosion();
};
