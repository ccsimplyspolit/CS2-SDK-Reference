#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/NavGravity_t.hpp"
#include "source2sdk/server/Navigation_t.hpp"
#include "source2sdk/server/WaypointFlags_t.hpp"
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
        // Standard-layout class: true
        // Size: 0x60
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AI_Waypoint_t
        {
        public:
            VectorWS m_vPos; // 0x0            
            source2sdk::server::WaypointFlags_t m_fWaypointFlags; // 0xc            
            source2sdk::server::Navigation_t m_nWpType; // 0x10            
            uint8_t _pad0014[0x14]; // 0x14
            float m_flYaw; // 0x28            
            float m_flBoundaryDist; // 0x2c            
            float m_flPathDistGoal; // 0x30            
            // m_hPathCorner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPathCorner;
            char m_hPathCorner[0x4]; // 0x34            
            // m_hData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hData;
            char m_hData[0x4]; // 0x38            
            std::uint32_t m_nGroundNavAreaId; // 0x3c            
            std::uint32_t m_nNavLinkAreaId; // 0x40            
            std::uint32_t m_nNavBlockId; // 0x44            
            source2sdk::navlib::NavGravity_t m_gravityOverride; // 0x48            
            bool m_bGravityOverrideSet; // 0x58            
            uint8_t _pad0059[0x3]; // 0x59
            std::uint32_t m_nConstrainedToMovableMeshId; // 0x5c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_vPos) == 0x0);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_fWaypointFlags) == 0xc);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_nWpType) == 0x10);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_flYaw) == 0x28);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_flBoundaryDist) == 0x2c);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_flPathDistGoal) == 0x30);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_hPathCorner) == 0x34);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_hData) == 0x38);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_nGroundNavAreaId) == 0x3c);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_nNavLinkAreaId) == 0x40);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_nNavBlockId) == 0x44);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_gravityOverride) == 0x48);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_bGravityOverrideSet) == 0x58);
        static_assert(offsetof(source2sdk::server::AI_Waypoint_t, m_nConstrainedToMovableMeshId) == 0x5c);
        
        static_assert(sizeof(source2sdk::server::AI_Waypoint_t) == 0x60);
    };
};
