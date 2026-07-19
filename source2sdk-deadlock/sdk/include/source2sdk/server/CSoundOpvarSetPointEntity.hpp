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
        // Size: 0x618
        // Has VTable
        #pragma pack(push, 1)
        class CSoundOpvarSetPointEntity : public source2sdk::server::CSoundOpvarSetPointBase
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnEnter; // 0x548            
            source2sdk::entity2::CEntityIOOutput m_OnExit; // 0x560            
            bool m_bAutoDisable; // 0x578            
            uint8_t _pad0579[0x23]; // 0x579
            float m_flDistanceMin; // 0x59c            
            float m_flDistanceMax; // 0x5a0            
            float m_flDistanceMapMin; // 0x5a4            
            float m_flDistanceMapMax; // 0x5a8            
            float m_flOcclusionRadius; // 0x5ac            
            float m_flOcclusionMin; // 0x5b0            
            float m_flOcclusionMax; // 0x5b4            
            float m_flValSetOnDisable; // 0x5b8            
            bool m_bSetValueOnDisable; // 0x5bc            
            // metadata: MNotSaved
            bool m_bReloading; // 0x5bd            
            uint8_t _pad05be[0x2]; // 0x5be
            std::int32_t m_nSimulationMode; // 0x5c0            
            std::int32_t m_nVisibilitySamples; // 0x5c4            
            Vector m_vDynamicProxyPoint; // 0x5c8            
            float m_flDynamicMaximumOcclusion; // 0x5d4            
            CEntityHandle m_hDynamicEntity; // 0x5d8            
            uint8_t _pad05dc[0x4]; // 0x5dc
            CUtlSymbolLarge m_iszDynamicEntityName; // 0x5e0            
            // metadata: MNotSaved
            float m_flPathingDistanceNormFactor; // 0x5e8            
            // metadata: MNotSaved
            Vector m_vPathingSourcePos; // 0x5ec            
            // metadata: MNotSaved
            Vector m_vPathingListenerPos; // 0x5f8            
            // metadata: MNotSaved
            Vector m_vPathingDirection; // 0x604            
            // metadata: MNotSaved
            std::int32_t m_nPathingSourceIndex; // 0x610            
            uint8_t _pad0614[0x4];
            
            // Datamap fields:
            // void InputSetDisabledValue; // 0x0
            // void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
            // float InputSetDistanceMapMin; // 0x0
            // float InputSetDistanceMapMax; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointEntity) == 0x618);
    };
};
