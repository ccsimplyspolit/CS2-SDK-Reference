#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/lerpdata_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x990
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerLerpObject : public source2sdk::server::CBaseTrigger
        {
        public:
            CUtlSymbolLarge m_iszLerpTarget; // 0x8f0            
            // m_hLerpTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLerpTarget;
            char m_hLerpTarget[0x4]; // 0x8f8            
            uint8_t _pad08fc[0x4]; // 0x8fc
            CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x900            
            source2sdk::modellib::AttachmentHandle_t m_hLerpTargetAttachment; // 0x908            
            uint8_t _pad0909[0x3]; // 0x909
            float m_flLerpDuration; // 0x90c            
            bool m_bAttachedEntityWasParented; // 0x910            
            bool m_bLerpRestoreMoveType; // 0x911            
            bool m_bSingleLerpObject; // 0x912            
            uint8_t _pad0913[0x5]; // 0x913
            // m_vecLerpingObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::lerpdata_t> m_vecLerpingObjects;
            char m_vecLerpingObjects[0x18]; // 0x918            
            CUtlSymbolLarge m_iszLerpEffect; // 0x930            
            CUtlSymbolLarge m_iszLerpSound; // 0x938            
            bool m_bAttachTouchingObject; // 0x940            
            uint8_t _pad0941[0x3]; // 0x941
            // m_hEntityToWaitForDisconnect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntityToWaitForDisconnect;
            char m_hEntityToWaitForDisconnect[0x4]; // 0x944            
            source2sdk::entity2::CEntityIOOutput m_OnLerpStarted; // 0x948            
            source2sdk::entity2::CEntityIOOutput m_OnLerpFinished; // 0x960            
            source2sdk::entity2::CEntityIOOutput m_OnDetached; // 0x978            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerLerpObject because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerLerpObject) == 0x990);
    };
};
