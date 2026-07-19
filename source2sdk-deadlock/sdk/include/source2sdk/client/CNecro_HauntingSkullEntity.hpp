#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelBaseAbility;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9b8
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
        // static metadata: MNetworkVarNames "int m_eSkullState"
        #pragma pack(push, 1)
        class CNecro_HauntingSkullEntity : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09a8[0x4]; // 0x9a8
            // metadata: MNetworkEnable
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_hAbility;
            char m_hAbility[0x4]; // 0x9ac            
            // metadata: MNetworkEnable
            std::int32_t m_eSkullState; // 0x9b0            
            uint8_t _pad09b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNecro_HauntingSkullEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNecro_HauntingSkullEntity) == 0x9b8);
    };
};
