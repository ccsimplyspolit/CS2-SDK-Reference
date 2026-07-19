#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x540
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetPointBase : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bDisabled; // 0x498            
            uint8_t _pad0499[0x3]; // 0x499
            CEntityHandle m_hSource; // 0x49c            
            uint8_t _pad04a0[0x18]; // 0x4a0
            CUtlSymbolLarge m_iszSourceEntityName; // 0x4b8            
            uint8_t _pad04c0[0x50]; // 0x4c0
            // metadata: MNotSaved
            VectorWS m_vLastPosition; // 0x510            
            float m_flRefreshTime; // 0x51c            
            CUtlSymbolLarge m_iszStackName; // 0x520            
            CUtlSymbolLarge m_iszOperatorName; // 0x528            
            CUtlSymbolLarge m_iszOpvarName; // 0x530            
            std::int32_t m_iOpvarIndex; // 0x538            
            bool m_bUseAutoCompare; // 0x53c            
            bool m_bFastRefresh; // 0x53d            
            uint8_t _pad053e[0x2];
            
            // Datamap fields:
            // uint64_t InputSetEventGuid; // 0x0
            // CUtlSymbolLarge InputSetStackName; // 0x0
            // CUtlSymbolLarge InputSetOperatorName; // 0x0
            // CUtlSymbolLarge InputSetOpvarName; // 0x0
            // CUtlSymbolLarge InputSetOpvarIndex; // 0x0
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointBase) == 0x540);
    };
};
