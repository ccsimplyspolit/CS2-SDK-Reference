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
        // Size: 0x10d8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_Precipitation : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNotSaved
            float m_flDensity; // 0x1098            
            uint8_t _pad109c[0xc]; // 0x109c
            // metadata: MNotSaved
            float m_flParticleInnerDist; // 0x10a8            
            uint8_t _pad10ac[0x4]; // 0x10ac
            // metadata: MNotSaved
            char* m_pParticleDef; // 0x10b0            
            uint8_t _pad10b8[0xc]; // 0x10b8
            // metadata: MNotSaved
            source2sdk::client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x10c4            
            // metadata: MNotSaved
            bool m_bActiveParticlePrecipEmitter[1]; // 0x10cc            
            // metadata: MNotSaved
            bool m_bParticlePrecipInitialized; // 0x10cd            
            // metadata: MNotSaved
            bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x10ce            
            uint8_t _pad10cf[0x1]; // 0x10cf
            // metadata: MNotSaved
            std::int32_t m_nAvailableSheetSequencesMaxIndex; // 0x10d0            
            uint8_t _pad10d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Precipitation) == 0x10d8);
    };
};
