#pragma once

#include <SFML/Graphics.hpp>
#include "ECSX/Component.hpp"
#include "Env/Components/Drawable.hpp"
#include "Env/Components/GenericUpdateable.hpp"
#include "Env/Components/Transformable.hpp"
#include "Graphics/AnimatedSprite.hpp"

namespace Env::Component
{

/**
 * @brief Component container over a graphic AnimatedSprite instance.
 * 
 */
class AnimatedSprite : public Env::Component::Drawable,
					   public Env::Component::Transformable,
					   public Env::Component::GenericUpdateable
{
public:
	Graphics::AnimatedSprite sprite;

	void update();

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

}