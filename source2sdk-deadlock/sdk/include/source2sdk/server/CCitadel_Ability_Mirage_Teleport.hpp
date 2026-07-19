#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x1138
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
        // static metadata: MNetworkVarNames "GameTime_t m_tTeleportCompletedTime"
        // static metadata: MNetworkVarNames "VectorWS m_vTargetPosition"
        // static metadata: MNetworkVarNames "QAngle m_vTargetAngles"
        #pragma pack(push, 1)
        class CCitadel_Ability_Mirage_Teleport : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x18]; // 0xf70
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xf88            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tTeleportCompletedTime; // 0xf8c            
            // metadata: MNetworkEnable
            VectorWS m_vTargetPosition; // 0xf90            
            // metadata: MNetworkEnable
            QAngle m_vTargetAngles; // 0xf9c            
            uint8_t _pad0fa8[0x190];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Mirage_Teleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Mirage_Teleport) == 0x1138);
    };
};
