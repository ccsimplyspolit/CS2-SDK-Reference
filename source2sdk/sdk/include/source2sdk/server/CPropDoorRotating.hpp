#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBasePropDoor.hpp"
#include "source2sdk/server/PropDoorRotatingOpenDirection_e.hpp"
#include "source2sdk/server/PropDoorRotatingSpawnPos_t.hpp"
#include "source2sdk/server/doorCheck_e.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CEntityBlocker;
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
        // Size: 0xe40
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPropDoorRotating : public source2sdk::server::CBasePropDoor
        {
        public:
            Vector m_vecAxis; // 0xda0            
            float m_flDistance; // 0xdac            
            source2sdk::server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xdb0            
            source2sdk::server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xdb4            
            // metadata: MNotSaved
            source2sdk::server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xdb8            
            // metadata: MNotSaved
            source2sdk::server::doorCheck_e m_eDefaultCheckDirection; // 0xdbc            
            float m_flAjarAngle; // 0xdc0            
            QAngle m_angRotationAjarDeprecated; // 0xdc4            
            QAngle m_angRotationClosed; // 0xdd0            
            QAngle m_angRotationOpenForward; // 0xddc            
            QAngle m_angRotationOpenBack; // 0xde8            
            QAngle m_angGoal; // 0xdf4            
            // metadata: MNotSaved
            Vector m_vecForwardBoundsMin; // 0xe00            
            // metadata: MNotSaved
            Vector m_vecForwardBoundsMax; // 0xe0c            
            // metadata: MNotSaved
            Vector m_vecBackBoundsMin; // 0xe18            
            // metadata: MNotSaved
            Vector m_vecBackBoundsMax; // 0xe24            
            bool m_bAjarDoorShouldntAlwaysOpen; // 0xe30            
            uint8_t _pad0e31[0x3]; // 0xe31
            // m_hEntityBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CEntityBlocker> m_hEntityBlocker;
            char m_hEntityBlocker[0x4]; // 0xe34            
            uint8_t _pad0e38[0x8];
            
            // Datamap fields:
            // float InputSetRotationDistance; // 0x0
            // float InputSetSpeed; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPropDoorRotating because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPropDoorRotating) == 0xe40);
    };
};
