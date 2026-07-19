#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x6d0
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CColorCorrection : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flFadeInDuration; // 0x498            
            float m_flFadeOutDuration; // 0x49c            
            float m_flStartFadeInWeight; // 0x4a0            
            float m_flStartFadeOutWeight; // 0x4a4            
            source2sdk::entity2::GameTime_t m_flTimeStartFadeIn; // 0x4a8            
            source2sdk::entity2::GameTime_t m_flTimeStartFadeOut; // 0x4ac            
            float m_flMaxWeight; // 0x4b0            
            bool m_bStartDisabled; // 0x4b4            
            bool m_bEnabled; // 0x4b5            
            // metadata: MNotSaved
            bool m_bMaster; // 0x4b6            
            // metadata: MNotSaved
            bool m_bClientSide; // 0x4b7            
            bool m_bExclusive; // 0x4b8            
            uint8_t _pad04b9[0x3]; // 0x4b9
            float m_MinFalloff; // 0x4bc            
            float m_MaxFalloff; // 0x4c0            
            float m_flCurWeight; // 0x4c4            
            // metadata: MNotSaved
            char m_netlookupFilename[512]; // 0x4c8            
            CUtlSymbolLarge m_lookupFilename; // 0x6c8            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // float InputSetFadeInDuration; // 0x0
            // float InputSetFadeOutDuration; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CColorCorrection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CColorCorrection) == 0x6d0);
    };
};
