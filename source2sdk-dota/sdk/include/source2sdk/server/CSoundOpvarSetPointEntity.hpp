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
        // Size: 0x630
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetPointEntity : public source2sdk::server::CSoundOpvarSetPointBase
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnEnter; // 0x540            
            source2sdk::entity2::CEntityIOOutput m_OnExit; // 0x558            
            bool m_bAutoDisable; // 0x570            
            uint8_t _pad0571[0x43]; // 0x571
            float m_flDistanceMin; // 0x5b4            
            float m_flDistanceMax; // 0x5b8            
            float m_flDistanceMapMin; // 0x5bc            
            float m_flDistanceMapMax; // 0x5c0            
            float m_flOcclusionRadius; // 0x5c4            
            float m_flOcclusionMin; // 0x5c8            
            float m_flOcclusionMax; // 0x5cc            
            float m_flValSetOnDisable; // 0x5d0            
            bool m_bSetValueOnDisable; // 0x5d4            
            // metadata: MNotSaved
            bool m_bReloading; // 0x5d5            
            uint8_t _pad05d6[0x2]; // 0x5d6
            std::int32_t m_nSimulationMode; // 0x5d8            
            std::int32_t m_nVisibilitySamples; // 0x5dc            
            Vector m_vDynamicProxyPoint; // 0x5e0            
            float m_flDynamicMaximumOcclusion; // 0x5ec            
            CEntityHandle m_hDynamicEntity; // 0x5f0            
            uint8_t _pad05f4[0x4]; // 0x5f4
            CUtlSymbolLarge m_iszDynamicEntityName; // 0x5f8            
            // metadata: MNotSaved
            float m_flPathingDistanceNormFactor; // 0x600            
            // metadata: MNotSaved
            VectorWS m_vPathingSourcePos; // 0x604            
            // metadata: MNotSaved
            VectorWS m_vPathingListenerPos; // 0x610            
            // metadata: MNotSaved
            Vector m_vPathingDirection; // 0x61c            
            // metadata: MNotSaved
            std::int32_t m_nPathingSourceIndex; // 0x628            
            uint8_t _pad062c[0x4];
            
            // Datamap fields:
            // void InputSetDisabledValue; // 0x0
            // float InputSetDistanceMapMin; // 0x0
            // float InputSetDistanceMapMax; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointEntity) == 0x630);
    };
};
