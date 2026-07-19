#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/magnetted_objects_t.hpp"

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
        // Size: 0x9d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysMagnet : public source2sdk::server::CBaseAnimGraph
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMagnetAttach; // 0x960            
            source2sdk::entity2::CEntityIOOutput m_OnMagnetDetach; // 0x978            
            float m_massScale; // 0x990            
            float m_forceLimit; // 0x994            
            float m_torqueLimit; // 0x998            
            uint8_t _pad099c[0x4]; // 0x99c
            // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::magnetted_objects_t> m_MagnettedEntities;
            char m_MagnettedEntities[0x18]; // 0x9a0            
            bool m_bActive; // 0x9b8            
            bool m_bHasHitSomething; // 0x9b9            
            uint8_t _pad09ba[0x2]; // 0x9ba
            float m_flTotalMass; // 0x9bc            
            float m_flRadius; // 0x9c0            
            source2sdk::entity2::GameTime_t m_flNextSuckTime; // 0x9c4            
            std::int32_t m_iMaxObjectsAttached; // 0x9c8            
            uint8_t _pad09cc[0x4];
            
            // Datamap fields:
            // void InputToggle; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysMagnet) == 0x9d0);
    };
};
