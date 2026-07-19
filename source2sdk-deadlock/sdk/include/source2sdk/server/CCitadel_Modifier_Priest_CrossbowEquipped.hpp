#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_Ability_Priest_CrossbowWeapon;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x110
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Priest_CrossbowEquipped : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::server::CCitadel_Ability_Priest_CrossbowWeapon* m_pCrossbowWeapon; // 0xd0            
            uint8_t _pad00d8[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Priest_CrossbowEquipped because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Priest_CrossbowEquipped) == 0x110);
    };
};
