#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CSoundOpvarSetPointBase.hpp"

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
        // Size: 0x640
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetPointEntity : public source2sdk::server::CSoundOpvarSetPointBase
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnEnter; // 0x550            
            source2sdk::entity2::CEntityIOOutput m_OnExit; // 0x568            
            bool m_bAutoDisable; // 0x580            
            uint8_t _pad0581[0x43]; // 0x581
            float m_flDistanceMin; // 0x5c4            
            float m_flDistanceMax; // 0x5c8            
            float m_flDistanceMapMin; // 0x5cc            
            float m_flDistanceMapMax; // 0x5d0            
            float m_flOcclusionRadius; // 0x5d4            
            float m_flOcclusionMin; // 0x5d8            
            float m_flOcclusionMax; // 0x5dc            
            float m_flValSetOnDisable; // 0x5e0            
            bool m_bSetValueOnDisable; // 0x5e4            
            // metadata: MNotSaved
            bool m_bReloading; // 0x5e5            
            uint8_t _pad05e6[0x2]; // 0x5e6
            std::int32_t m_nSimulationMode; // 0x5e8            
            std::int32_t m_nVisibilitySamples; // 0x5ec            
            Vector m_vDynamicProxyPoint; // 0x5f0            
            float m_flDynamicMaximumOcclusion; // 0x5fc            
            CEntityHandle m_hDynamicEntity; // 0x600            
            uint8_t _pad0604[0x4]; // 0x604
            CUtlSymbolLarge m_iszDynamicEntityName; // 0x608            
            // metadata: MNotSaved
            float m_flPathingDistanceNormFactor; // 0x610            
            // metadata: MNotSaved
            VectorWS m_vPathingSourcePos; // 0x614            
            // metadata: MNotSaved
            VectorWS m_vPathingListenerPos; // 0x620            
            // metadata: MNotSaved
            Vector m_vPathingDirection; // 0x62c            
            // metadata: MNotSaved
            std::int32_t m_nPathingSourceIndex; // 0x638            
            uint8_t _pad063c[0x4];
            
            // Datamap fields:
            // void InputSetDisabledValue; // 0x0
            // float InputSetDistanceMapMin; // 0x0
            // float InputSetDistanceMapMax; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointEntity) == 0x640);
    };
};
