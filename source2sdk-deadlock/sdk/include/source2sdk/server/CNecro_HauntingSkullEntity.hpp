#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa88
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
        // static metadata: MNetworkVarNames "int m_eSkullState"
        #pragma pack(push, 1)
        class CNecro_HauntingSkullEntity : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad0780[0x300]; // 0x780
            // metadata: MNetworkEnable
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbility;
            char m_hAbility[0x4]; // 0xa80            
            // metadata: MNetworkEnable
            std::int32_t m_eSkullState; // 0xa84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNecro_HauntingSkullEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNecro_HauntingSkullEntity) == 0xa88);
    };
};
