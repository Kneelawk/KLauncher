/* Copyright 2013-2021 MultiMC Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <launch/LaunchStep.h>
#include <LoggedProcess.h>
#include <minecraft/auth/AuthSession.h>

#include "QuickPlayTarget.h"

class DirectJavaLaunch: public LaunchStep
{
    Q_OBJECT
public:
    explicit DirectJavaLaunch(LaunchTask *parent);
    virtual ~DirectJavaLaunch() {};

    virtual void executeTask();
    virtual bool abort();
    virtual void proceed();
    virtual bool canAbort() const
    {
        return true;
    }
    void setWorkingDirectory(const QString &wd);
    void setAuthSession(AuthSessionPtr session)
    {
        m_session = session;
    }

    void setQuickPlayTarget(QuickPlayTargetPtr quickPlayTarget)
    {
        m_quickPlayTarget = std::move(quickPlayTarget);
    }

private slots:
    void on_state(LoggedProcess::State state);

private:
    LoggedProcess m_process;
    QString m_command;
    AuthSessionPtr m_session;
    QuickPlayTargetPtr m_quickPlayTarget;
};

