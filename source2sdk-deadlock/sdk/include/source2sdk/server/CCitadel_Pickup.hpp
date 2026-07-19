#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xb10
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bInteractive"
        // static metadata: MNetworkVarNames "Vector m_vVacuumStartPos"
        // static metadata: MNetworkVarNames "Vector m_vInitialVacuumVel"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hVacuumTarget"
        #pragma pack(push, 1)
        class CCitadel_Pickup : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xa90            
            // metadata: MNetworkEnable
            bool m_bActive; // 0xab0            
            // metadata: MNetworkEnable
            bool m_bInteractive; // 0xab1            
            uint8_t _pad0ab2[0x2]; // 0xab2
            // metadata: MNetworkEnable
            Vector m_vVacuumStartPos; // 0xab4            
            // metadata: MNetworkEnable
            Vector m_vInitialVacuumVel; // 0xac0            
            // metadata: MNetworkEnable
            // m_hVacuumTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hVacuumTarget;
            char m_hVacuumTarget[0x4]; // 0xacc            
            uint8_t _pad0ad0[0x10]; // 0xad0
            VectorWS m_vVacuumPos; // 0xae0            
            source2sdk::entity2::GameTime_t m_flVacuumStartTime; // 0xaec            
            uint8_t _pad0af0[0x4]; // 0xaf0
            Vector m_vImpactVel; // 0xaf4            
            Vector m_vImpactPos; // 0xb00            
            source2sdk::entity2::GameTime_t m_flImpactTime; // 0xb0c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Pickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Pickup) == 0xb10);
    };
};
