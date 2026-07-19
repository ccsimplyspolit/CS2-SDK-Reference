#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/TimedEvent.hpp"

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
        // Size: 0xac8
        // Has VTable
        #pragma pack(push, 1)
        class C_Precipitation : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNotSaved
            float m_flDensity; // 0xa78            
            uint8_t _pad0a7c[0xc]; // 0xa7c
            // metadata: MNotSaved
            float m_flParticleInnerDist; // 0xa88            
            uint8_t _pad0a8c[0x4]; // 0xa8c
            // metadata: MNotSaved
            char* m_pParticleDef; // 0xa90            
            uint8_t _pad0a98[0x20]; // 0xa98
            // metadata: MNotSaved
            source2sdk::client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xab8            
            // metadata: MNotSaved
            bool m_bActiveParticlePrecipEmitter[1]; // 0xac0            
            // metadata: MNotSaved
            bool m_bParticlePrecipInitialized; // 0xac1            
            // metadata: MNotSaved
            bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xac2            
            uint8_t _pad0ac3[0x1]; // 0xac3
            // metadata: MNotSaved
            std::int32_t m_nAvailableSheetSequencesMaxIndex; // 0xac4            
            
            // Datamap fields:
            // bool m_bActiveParticlePrecipEmitter; // 0xac0
            // void m_tParticlePrecipTraceTimer; // 0xab8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Precipitation) == 0xac8);
    };
};
