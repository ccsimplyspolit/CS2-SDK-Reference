#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSndBeatPattern.hpp"
#include "source2sdk/soundsystem/CSndBeatTrack.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x90
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MVDataRoot
        // static metadata: MVDataSingleton
        // static metadata: MPropertyFriendlyName "Beat Pattern Library"
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSndBeatPatternManager
        {
        public:
            uint8_t _pad0000[0x38]; // 0x0
            // metadata: MPropertyFriendlyName "Patterns"
            // metadata: MVDataPromoteField
            // m_vecPatterns has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::CSndBeatPattern> m_vecPatterns;
            char m_vecPatterns[0x18]; // 0x38            
            uint8_t _pad0050[0x20]; // 0x50
            // metadata: MPropertyFriendlyName "Tracks"
            // metadata: MVDataPromoteField
            // m_vecActiveTracks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::CSndBeatTrack> m_vecActiveTracks;
            char m_vecActiveTracks[0x18]; // 0x70            
            uint8_t _pad0088[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPatternManager, m_vecPatterns) == 0x38);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPatternManager, m_vecActiveTracks) == 0x70);
        
        static_assert(sizeof(source2sdk::soundsystem::CSndBeatPatternManager) == 0x90);
    };
};
