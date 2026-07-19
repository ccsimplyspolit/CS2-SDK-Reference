#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0xde0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bInteractive"
        // static metadata: MNetworkVarNames "Vector m_vVacuumStartPos"
        // static metadata: MNetworkVarNames "Vector m_vInitialVacuumVel"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hVacuumTarget"
        #pragma pack(push, 1)
        class C_Citadel_Pickup : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnActiveChanged"
            bool m_bActive; // 0xca8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInteractiveChanged"
            bool m_bInteractive; // 0xca9            
            uint8_t _pad0caa[0x2]; // 0xcaa
            // metadata: MNetworkEnable
            Vector m_vVacuumStartPos; // 0xcac            
            // metadata: MNetworkEnable
            Vector m_vInitialVacuumVel; // 0xcb8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnVacuumTargetChanged"
            // m_hVacuumTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hVacuumTarget;
            char m_hVacuumTarget[0x4]; // 0xcc4            
            uint8_t _pad0cc8[0x100]; // 0xcc8
            source2sdk::entity2::GameTime_t m_flVacuumStartTime; // 0xdc8            
            VectorWS m_vVacuumPos; // 0xdcc            
            float m_flLastFrameTime; // 0xdd8            
            bool m_bVacuumFinished; // 0xddc            
            uint8_t _pad0ddd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Pickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Pickup) == 0xde0);
    };
};
